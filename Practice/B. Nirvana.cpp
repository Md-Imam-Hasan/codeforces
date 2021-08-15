#include <bits/stdc++.h>
#define ll long long
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
const double pi = 2.0*acos(0.0);

using namespace std;

///Code starts from here
ll power(ll n)
{
    ll prod=1;
    for(ll i=1;i<=n;i++)
    {
        prod*=9;
    }
    return prod;
}
int main()
{
    fast_io;
    int t=1,kase=1;


    while(t--)
    {
        ll n,i,j,k;
        string s;
        cin>>s;
        n=s.length();
        ll ans=1;
        ll prod=power(n-1);
        ans=max(ans,prod);
        k=1;
        for(i=0;i<n;i++)
        {
            ans=max(ans,k*power(n-i-1)*(s[i]-'1'));
            k*=(s[i]-'0');
        }
        ans=max(ans,k);
        cout<<ans<<endl;


    }

    return 0;
}
