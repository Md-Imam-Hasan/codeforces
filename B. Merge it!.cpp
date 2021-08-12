#include <bits/stdc++.h>
#define ll long long
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
const double pi =     2.0*acos(0.0);

using namespace std;

///Code starts from here
int main()
{
    fast_io;
    int t,kase=1;
    cin>>t;

    while(t--)
    {
        ll n,i,j,k=0,cnt=0,x=0,y=0;
        cin>>n;
        ll a[n];
        vector<ll>v;

        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]%3)
            {
                v.push_back(a[i]);
            }
            else cnt++;
        }
        sort(v.begin(),v.end());
        map<ll,ll>mp;
        for(i=0;i<v.size();i++)
        {
            mp[v[i]%3]++;
        }
        k=min(mp[1],mp[2]);
        if(mp[1]>mp[2])
        {
            x=(mp[1]-mp[2])/3;
        }
        else if(mp[2]>mp[1])
        {
            y=(mp[2]-mp[1])*2;
            y/=6;
            ///y*=2;
        }
        cout<<cnt+x+y+k<<endl;
    }

    return 0;
}



