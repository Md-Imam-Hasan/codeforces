#include <bits/stdc++.h>
#define ll long long
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

///Code starts from here
int main()
{
    fast_io;
    int t;
    cin>>t;

    while(t--)
    {
        ll n,i,j,k;
        cin>>n;
        vector<pair<ll,ll>>v;

        for(i=0;i<n;i++)
        {
            cin>>k;
            v.push_back(make_pair(k,i+1));
        }

        sort(v.begin(),v.end());
        ll pmax=0,pmin=INT_MAX;
        for(i=0;i<n;i++)
        {
            pmax=max(pmax,v[i].second);
            pmin=min(pmin,v[i].second);
            if(pmax-pmin+1==v[i].first)
            {
                cout<<"1";
            }
            else cout<<"0";
        }
        if(t) cout<<"\n";
    }

    return 0;
}

