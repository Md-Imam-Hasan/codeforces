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

    A:
    while(t--)
    {
        ll n,i,q,j,k,sum=0,mn=INT_MAX,mnsum=0;
        cin>>n>>q;
        ll a[n];
        bool ok=1;

        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        if(n==1)
        {
            cout<<a[0]<<endl;
            goto A;
        }
        else if(n==2)
        {
            cout<<max(a[0],a[1])<<endl;
            goto A;
        }
        if(a[0]>a[1])
        {
            sum+=a[0];
            ok=!ok;
        }
        for(i=1;i<n-1;i++)
        {
            if(a[i]>a[i-1]&&a[i]>a[i+1])
            {
                sum+=a[i];
                if(ok)
                {
                    ok=!ok;
                }
                else
                {
                    mnsum+=mn;
                    ok=!ok;
                    mn=INT_MAX;
                }
            }
            if(!ok) mn=min(mn,a[i]);
        }
        if(a[n-1]>a[n-2]) sum+=a[n-1],mnsum+=mn,sum-=mnsum;
        cout<<sum<<endl;

    }

    return 0;
}
