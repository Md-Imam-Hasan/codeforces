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
        ll n,i,j,k,mna=INT_MAX,mnb=INT_MAX,ans=0;
        cin>>n;
        ll a[n],b[n];

        for(i=0;i<n;i++)
        {
            cin>>a[i];
            mna=min(mna,a[i]);
        }
        for(i=0;i<n;i++)
        {
            cin>>b[i];
            mnb=min(mnb,b[i]);
        }
        for(i=0;i<n;i++)
        {
            ans+=max(abs(a[i]-mna),abs(b[i]-mnb));
        }

        cout<<ans<<endl;
    }

    return 0;
}
