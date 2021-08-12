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
        ll n,h,m,i,j,k;
        cin>>n>>h>>m;
        ll ans=0;
        ll a[n+1];
        for(i=1;i<=n;i++)
            a[i]=h;

        while(m--)
        {
            ll l,r,x;
            cin>>l>>r>>x;
            for(i=l;i<=r;i++)
            {
                a[i]=min(a[i],x);
            }
        }
        for(i=1;i<=n;i++)
        {
            ans+=(a[i]*a[i]);
        }

        cout<<ans<<endl;
    }

    return 0;
}
