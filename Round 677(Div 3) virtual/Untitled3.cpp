#include <bits/stdc++.h>
#define ll long long
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
const double pi = 2.0*acos(0.0);

using namespace std;

///Code starts from here
int main()
{
    fast_io;
    int t,kase=1;
    cin>>t;

    while(t--)
    {
        ll n,i,j,k,mx=0,ans;
        cin>>n;
        ll a[n];

        for(i=0;i<n;i++)
        {
            cin>>a[i];
            mx=max(mx,a[i]);
        }
        bool ok=0;
        if(a[0]==mx&&a[0]>a[1])
        {
            ans=1;
            ok=1;
        }
        else if(a[n-1]==mx&&a[n-1]>a[n-2])
        {
            ans=n;
            ok=1;
        }
        else
        {
            for(i=1;i<n-1;i++)
            {
                if(a[i]==mx&&a[i]>a[i-1])
                {
                    ans=i+1;
                    ok=1;
                    break;
                }
                else if(a[i]==mx&&a[i]>a[i+1])
                {
                    ans=i+1;
                    ok=1;
                    break;
                }
            }
        }
        if(ok) cout<<ans<<endl;
        else cout<<"-1"<<endl;
    }

    return 0;
}
