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
        ll ans=0;
        for(i=2;i<n;i++)
        {
            ans+=(i*(i+1));
        }
        cout<<ans<<endl;
    }

    return 0;
}
