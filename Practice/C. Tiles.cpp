#include <bits/stdc++.h>
#define ll long long
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

///Code starts from here
int main()
{
    fast_io;
    ll w,h,ans=1;
    cin>>w>>h;
    for(ll i=1;i<=w+h;i++)
    {
        ans*=2;
        ans=ans%998244353;
    }
    cout<<ans<<endl;
    return 0;
}

