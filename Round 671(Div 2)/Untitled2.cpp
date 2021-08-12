#include <bits/stdc++.h>
#define ll long long
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
const double pi = 2.0*acos(0.0);
int n;

using namespace std;
ll power(ll n)
{
    ll prod=1;
    for(ll i=1;i<=n;i++)
    {
        prod*=2;
    }
    return prod;
}

///Code starts from here
int main()
{
    fast_io;
    int t,kase;
    cin>>t;

    while(t--)
    {
        ll n,i=1,j,k=0,x,y;
        cin>>n;
        while(1)
        {
            y=power(i)-1;
            x=y*(y+1)/2;
            if(x<=n)
            {
                k++;
                n-=x;
                i++;
            }
            else break;
        }
        cout<<k<<endl;
    }

    return 0;
}
