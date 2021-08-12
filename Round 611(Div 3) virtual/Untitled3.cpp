#include <bits/stdc++.h>
#define ll long long
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
const double pi = 2.0*acos(0.0);

using namespace std;

///Code starts from here
int main()
{
    fast_io;
    int t=1,kase=1;

    while(t--)
    {
        ll n,i,j,k;
        cin>>n;
        ll a[n];
        bool b[n+1];
        memset(b,1,sizeof(b));
        set<ll>v;

        for(i=0;i<n;i++)
        {
            cin>>a[i];
            b[a[i]]=0;
        }
        for(i=1;i<=n;i++)
        {
            if(b[i]==1) v.insert(i);
        }
        //sort(v.begin(),v.end());
        for(auto p:v) cout<<p<<" ";
        cout<<endl;


        for(i=0;i<n;i++)
        {
            if(!a[i])
            {
                auto it=v.lower_bound(i+1);
                ///cout<<v[it]<<endl;
                cout<<(*it)<<endl;
                //if((*it)==(i+1)) it--;
                a[i]=*it;
                v.erase(*it);
            }
        }
        for(i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
