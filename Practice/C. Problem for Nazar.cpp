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
        ll n,i,j,k=1,l,r;
        cin>>l>>r;
        ll x=l-1;
        ll cnt=0;
        while(k<x)
        {
            x-=k;
            k*=2;
            cnt++;
        }

    }

    return 0;
}
