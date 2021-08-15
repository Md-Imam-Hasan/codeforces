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
    //cin>>t;

    while(t--)
    {
        ll n,i,j,k,ans=1,cnt=0;
        cin>>n;
        if(n==1)
        {
            cout<<ans<<endl;
        }
        else
        {
            for(i=2;i<=n;i++)
            {
                cnt+=4;
                ans+=cnt;
            }
            cout<<ans<<endl;
        }


    }

    return 0;
}

