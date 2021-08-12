#include <bits/stdc++.h>
#define ll long long
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
const double pi =     2.0*acos(0.0);

using namespace std;

///Code starts from here
int main()
{
    fast_io;
    int t;
    cin>>t;

    while(t--)
    {
        int n,i,j,k;
        cin>>n;
        if(n<=30)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
            if(n==36)
                cout<<"6 10 15 "<<n-31<<endl;
            else if(n==40)
                cout<<"6 10 15 "<<n-31<<endl;
            else if(n==44)
                cout<<"6 10 15 "<<n-31<<endl;
            else
                cout<<"6 10 14 "<<n-30<<endl;
        }

    }

    return 0;
}

