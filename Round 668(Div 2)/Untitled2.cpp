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
        ll n,i,j,k;
        cin>>n;
        ll a[n];

        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        bool ok=0;
        ll sum=a[0];
        ll ans=0;

        for(i=1;i<n;i++)
        {
            if(a[i]>=0)
            {
                if(sum<0) ans+=(sum*(-1));
                if(sum>=0) sum+=a[i];
                else sum=a[i];
            }
            else sum+=a[i];
            ///cout<<ans<<" "<<sum<<endl;
        }
        cout<<ans<<endl;

    }

    return 0;
}
