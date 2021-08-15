
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
    ///cin>>t;

    while(t--)
    {
        ll n,i,c,j,k,ans=1e18;
        cin>>n;
        ll a[n];

        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        for(c=1;;c++)
        {
            if(pow(c,n-1)>1e10) break;
            ll temp=0;
            for(i=0;i<n;i++)
            {
                temp+=abs(a[i]-pow(c,i));
            }
            ans=min(ans,temp);
        }
        cout<<ans<<endl;
    }

    return 0;
}
