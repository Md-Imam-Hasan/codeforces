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
    ///cin>>t;

    while(t--)
    {
        ll n,i,j,k=0,x,y,z;
        cin>>x>>y>>z;

        if((x/z+y/z)==(x+y)/z)
        {
            cout<<(x/z+y/z)<<" 0"<<endl;
        }
        else
        {
            cout<<(x+y)/z;
            if(x%z+y%z>=z)
            k=min(z-x%z,z-y%z);
            cout<<" "<<k<<endl;
        }
    }

    return 0;
}

