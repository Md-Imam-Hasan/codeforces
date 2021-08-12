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
        ll n,i,j,k,p,f,cnts,cntw,s,w;
        cin>>p>>f>>cnts>>cntw>>s>>w;
        ll a[n];
        if(s>w)
        {
            swap(s,w);
            swap(cnts,cntw);
        }
        ll ans=0;
        for(i=0;i<=cnts;i++)
        {
            ll x=min(p/w,cntw);
            ll cntwl=cntw-x;
            ll y=
        }
    }

    return 0;
}
