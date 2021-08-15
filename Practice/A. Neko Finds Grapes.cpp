#include <bits/stdc++.h>
#define ll long long
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
const double pi =     2.0*acos(0.0);

using namespace std;

///Code starts from here
int main()
{
    fast_io;
    int t=1,kase=1;

    while(t--)
    {
        ll n,m,r,i,j,k,odd1=0,even1=0,odd2=0,even2=0;
        cin>>n>>m;
        ll a[n],b[m];

        for(i=0;i<n;i++)
        {
            cin>>a[i];
           if(a[i]%2) odd1++;
           else even1++;
        }
        for(i=0;i<m;i++)
        {
            cin>>b[i];
            if(b[i]%2) odd2++;
            else even2++;
        }

        ll ans=0;
        ans+=min(odd1,even2);
        ans+=min(even1,odd2);
        cout<<ans<<endl;

    }

    return 0;
}

