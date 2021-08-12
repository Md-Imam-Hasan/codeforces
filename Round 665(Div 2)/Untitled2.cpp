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
        ll n,i,j,k,x1,y1,z1,x2,y2,z2;
        cin>>x1>>y1>>z1>>x2>>y2>>z2;
        ll ans=min(z1,y2);
        z1-=ans;
        y2-=ans;
        if(z2<=x1)
        {
            cout<<ans*2<<endl;
        }
        else
        {
            z2-=min(z2,x1);
            z2-=min(z2,z1);
            k=min(z2,y1)*2;
            cout<<ans*2-k<<endl;
        }

    }

    return 0;
}
