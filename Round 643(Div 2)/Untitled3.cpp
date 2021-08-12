#include <bits/stdc++.h>
#define ll long long

using namespace std;

///Code starts from here
int main()
{
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    ll ans=0;

    for(ll x=a+b;x<=b+c;x++)
    {
        ans+=max(0ll,(min(x-b,b)-max(x-c,a)+1)*min(x-c,d-c+1));
    }
    cout<<ans;

    return 0;
}
