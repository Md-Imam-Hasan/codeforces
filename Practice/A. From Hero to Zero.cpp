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
        ll n,i,j,k,ans=0;
        cin>>n>>k;
        while(n>0)
        {
            j=n%k;
            n=n-j;
            ans+=j;
            if(n%k==0&&n>0)
            {
                n/=k;
                ans++;
            }

        }

        cout<<ans<<endl;
    }

    return 0;
}
