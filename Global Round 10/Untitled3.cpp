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
        ll n,i,j,k,mx=0,mn=INT_MAX,ans=0,temp;
        cin>>n;
        ll a[n];

        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=1;i<n;i++)
        {
            if(a[i]<a[i-1])
            {
                ans+=(a[i-1]-a[i]);
            }
        }

        cout<<ans<<endl;

    }

    return 0;
}
