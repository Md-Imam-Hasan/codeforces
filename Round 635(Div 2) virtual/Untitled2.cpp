#include <bits/stdc++.h>
#define ll long long
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

///Code starts from here
int main()
{
    fast_io;
    int t;
    cin>>t;

    A:
    while(t--)
    {
        ll x,n,m,i,j,k;
        cin>>x>>n>>m;

        k=m*10;
        if(k>=x)
        {
            cout<<"YES";
            if(t) cout<<"\n";
            goto A;
        }

        for(i=1;i<=n;i++)
        {
            k-=10;
            k*=2;
            k+=1;
        }

        if(k>=x)
        {
            cout<<"YES";
        }
        else cout<<"NO";
        if(t) cout<<"\n";
    }

    return 0;
}
