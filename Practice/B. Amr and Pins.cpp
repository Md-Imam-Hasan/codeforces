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
        ll r,x,y,x1,y1,i,j,a=0,b;
        ll k;
        cin>>r>>x>>y>>x1>>y1;
        i=abs(x1-x);
        j=abs(y1-y);
        if(i<=r&&j<=r&&(i||j))
        {
            cout<<"1"<<endl;
        }
        else
        {
            k=ceil(sqrt((x1-x)*(x1-x)+(y1-y)*(y1-y)));
            //cout<<k<<endl;
            a=k/(r*2);
            if(k%(r*2)) a++;
            cout<<a<<endl;
        }
    }

    return 0;
}
