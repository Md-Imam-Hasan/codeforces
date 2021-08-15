#include <bits/stdc++.h>
#define ll long long
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
const double pi =     2.0*acos(0.0);

using namespace std;

///Code starts from here
int main()
{
    fast_io;
    ll n,t,i,j,k,s,d,ans=0,x=0;
    cin>>n>>t;
    for(i=0;i<n;i++)
    {
        cin>>s>>d;
        while(s<t) s+=d;
        if(!ans||s<x)
        {
            x=s;
            ans=i+1;
        }
    }
    cout<<ans<<endl;
    return 0;
}

