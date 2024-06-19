from datetime import timedelta, datetime, timezone
import pymongo

def current_utc_timestamp():
    current_datetime_utc = datetime.utcnow().replace(tzinfo=timezone.utc, microsecond=0)
    return current_datetime_utc

class TripRequestStatus:
    ACCEPTED = "accepted"

class TripStatus:
    CLOSED = "closed"

def main():
    client = pymongo.MongoClient('mongodb://localhost:27017/')
    db = client['busnetwork-local']

    # Define collection names based on your MongoDB structure
    class DBConnection:
        NETWORK_REQUESTS_COLLECTION = 'network_requests'
        TRIP_COLLECTION = 'trips'
        COMPANY_AFFILIATION_COLLECTION = 'company_affiliations'

    db_connection = DBConnection()
    sync_claim_deadline = SyncClaimDeadline(db_connection, db)
    sync_claim_deadline.update_all_claim_deadlines()

if __name__ == "__main__":
    main()




class SyncClaimDeadline:
    def __init__(self, db_connection, db):
        self.db_connection = db_connection
        self.db = db
        self.NETWORK_TRIPS =db[db_connection.NETWORK_REQUESTS_COLLECTION]
        self.TRIPS =db[db_connection.TRIP_COLLECTION]
        self.COMPANY_AFFILIATIONS =db[db_connection.COMPANY_AFFILIATION_COLLECTION]


    def update_all_claim_deadlines(self):
        default_deadline_days = 7
        now = current_utc_timestamp()
        new_closed_deadline = now + timedelta(days=default_deadline_days)
        operation_start_time = now 
        pipeline = [
            {
                '$match': {
                    'status': TripRequestStatus.ACCEPTED,
                    'claim_deadline': {'$exists': False}
                }
            },
            {
                '$lookup': {
                    'from': self.TRIPS.name,
                    'localField': 'trip',
                    'foreignField': '_id',
                    'pipeline': [
                        {'$project': {'_id': 0, 'trip_status': 1, 'planned_end_datetime': 1}}
                    ],
                    'as': 'trip_details'
                }
            },
            {
                '$unwind': '$trip_details'
            },
            {
                '$lookup': {
                    'from': self.COMPANY_AFFILIATIONS.name,
                    'localField': 'company_affiliation',
                    'foreignField': '_id',
                    'pipeline': [
                        {'$project': {'_id': 0, 'claim_deadline': 1}}
                    ],
                    'as': 'company_affiliation_details'
                }
            },
            {
                '$unwind': '$company_affiliation_details'
            },
            {
                '$addFields': {
                    'new_claim_deadline': {
                        '$cond': {
                            'if': {'$eq': ['$trip_details.trip_status', TripStatus.CLOSED]},
                            'then': new_closed_deadline,
                            'else': {
                                '$add': [
                                    '$trip_details.planned_end_datetime',
                                    {
                                        '$multiply': [
                                            {
                                                '$ifNull': [
                                                    '$company_affiliation_details.claim_deadline',
                                                    default_deadline_days
                                                ]
                                            },
                                            24 * 60 * 60 * 1000
                                        ]
                                    }
                                ]
                            }
                        }
                    }
                }
            },
            {
                '$set': {
                    'claim_deadline': '$new_claim_deadline',
                    "updated_at": current_utc_timestamp()
                }
            },
            {
                '$merge': {
                    'into': self.NETWORK_TRIPS.name, 
                    'whenMatched': 'merge'
                }
            }
        ]

        self.NETWORK_TRIPS.aggregate(pipeline)

        updated_count = self.NETWORK_TRIPS.count_documents({'updated_at': {'$gt': operation_start_time}})
        print(f"Updated {updated_count} documents.")