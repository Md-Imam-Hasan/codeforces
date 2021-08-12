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
        sort(a,a+n);

        ll prod=1,ans=-1000000000000000000;
        ///cout<<ans<<endl;

        for(i=0;i<=5;i++)
        {
            prod=1;
            for(j=0;j<i;j++)
            {
                prod*=a[j];
            }
            for(j=1;j<=(5-i);j++)
            {
                prod*=a[n-j];
            }
            ans=max(ans,prod);
        }
        cout<<ans<<endl;

    }

    return 0;
}
