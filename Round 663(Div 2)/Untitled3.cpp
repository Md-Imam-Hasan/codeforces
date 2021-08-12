#include <bits/stdc++.h>
#define ll long long
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
const double pi =     2.0*acos(0.0);
const int M=1e9+7;

using namespace std;

///Code starts from here
int main()
{
    fast_io;
    int t=1,kase=1;
    //cin>>t;

    while(t--)
    {
        ll n,i,j,k=1,p=1;
        cin>>n;

        for(i=1;i<=n;i++)
        {
            k*=i;
            k=k%M;
        }

        for(i=1;i<n;i++)
        {
            p*=2;
            p=p%M;
        }

        ll ans=(k-p)%M;
        if(ans>=0) cout<<ans<<endl;
        else cout<<ans+M<<endl;    }

    return 0;
}
