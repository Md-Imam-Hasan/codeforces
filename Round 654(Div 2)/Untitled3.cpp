#include <bits/stdc++.h>
#define ll long long

using namespace std;

///Code starts from here
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        ll a,b,n,m,x,y,z;
        cin>>a>>b>>n>>m;

        if(min(a,b)>=m&&a+b>=m+n) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }

    return 0;
}
