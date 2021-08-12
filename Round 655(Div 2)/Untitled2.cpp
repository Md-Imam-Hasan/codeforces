#include <bits/stdc++.h>
#define ll long long
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

///Code starts from here

int factors(int n)
{
    for(int i=3;i*i<=n;i++)
    {
        if(n%i==0) return i;
    }
    return n;
}
int main()
{
    fast_io;
    int t;
    cin>>t;

    while(t--)
    {
        ll n,i,j,k,mn=INT_MAX,x,y,value;
        cin>>n;
        if(n%2==0)
        {
            cout<<n/2<<" "<<n/2;
        }
        else
        {
            value=factors(n);
            k=n/value;
            cout<<k<<" "<<n-k;
        }
        if(t) cout<<"\n";
    }

    return 0;
}
