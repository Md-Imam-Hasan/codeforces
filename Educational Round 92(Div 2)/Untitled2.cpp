#include <bits/stdc++.h>
#define ll long long
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

///Code starts from here
int main()
{
    fast_io;
    int t;
    cin>>t;

    while(t--)
    {
        ll n,i,j,k,z,sum=0,flag=0,mx=0,ans=0;
        cin>>n>>k>>z;
        ll a[n];

        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }

        for(i=0;i<=k;i++)
        {
            sum+=a[i];
            if(i)
            {
                mx=max(mx,(a[i]+a[i-1]));
                for(j=0;j<=z;j++)
                {
                    if(j*2+i==k) ans=max(ans,sum+(mx*j));
                    if(j<z and j*2+i+1==k) ans=max(ans,sum+(mx*j)+a[i-1]);
                }
            }
        }
        cout<<ans;
        if(t) cout<<"\n";
    }

    return 0;
}
