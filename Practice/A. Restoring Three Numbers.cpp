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


    while(t--)
    {
        ll x1,x2,x3,x4,n,i,j,k;
        cin>>x1>>x2>>x3>>x4;
        ll a[4]={x1,x2,x3,x4};
        sort(a,a+4);
        ll mx=a[3];
        ///cout<<mx<<endl;
        ll a1,b,c;
        a1=mx-a[0];
        b=mx-a[1];
        c=mx-a[2];
        cout<<a1<<" "<<b<<" "<<c<<endl;

    }

    return 0;
}

