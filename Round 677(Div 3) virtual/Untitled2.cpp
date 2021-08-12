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
        ll n,i,j,k=0,ans=0;
        cin>>n;
        ll a[n];

        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        bool ok=0;
        for(i=0;i<n;i++)
        {
            if(a[i]==1&&!ok) ok=1;
            else if(ok&&!a[i]) k++;
            else if(a[i]&&ok)
            {
                ans+=k;
                k=0;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}
