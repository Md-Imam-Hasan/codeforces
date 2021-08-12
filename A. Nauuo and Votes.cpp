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
        ll n,i,j,k,x,y,z;
        cin>>x>>y>>z;
        if(x>y)
        {
            x-=y;
            if(x>z) cout<<"+"<<endl;
            else cout<<"?"<<endl;
        }
        else if(y>x)
        {
            y-=x;
            if(y>z) cout<<"-"<<endl;
            else cout<<"?"<<endl;
        }
        else if(x==y)
        {
            if(z) cout<<"?"<<endl;
            else cout<<"0"<<endl;
        }
    }

    return 0;
}
