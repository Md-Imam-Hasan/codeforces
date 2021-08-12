#include <bits/stdc++.h>
#define ll unsigned long long
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
        ll n,i,j,k,x,y;
        cin>>x>>y>>k;
        ll total=k+(k*y);
        ll ans=k+1;
        if(x>=total) cout<<ans<<endl;
        else{
        j=total-x;
        n=j/(x-1);
        if(j%(x-1)) n+=1;

        cout<<ans+n<<endl;
        }
    }

    return 0;
}
