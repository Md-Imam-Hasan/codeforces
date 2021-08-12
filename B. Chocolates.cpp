#include <bits/stdc++.h>
#define ll long long
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
const double pi = 2.0*acos(0.0);

using namespace std;

///Code starts from here
int main()
{
    fast_io;
    int t=1,kase=1;

    while(t--)
    {
        ll n,i,j,k;
        cin>>n;
        ll a[n];
        k=n-1;
        ll sum=0,ans=0,mx=INT_MAX,tmp;
        bool ok=1;

        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=n-1;i>=0;i--)
        {
            mx=min(a[i],mx-1);
            if(mx>=0) ans+=mx;
        }
        cout<<ans<<endl;
    }

    return 0;
}

