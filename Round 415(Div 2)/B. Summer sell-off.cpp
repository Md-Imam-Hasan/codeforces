#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n,f;
    cin>>n>>f;
    ll a,b,p[n],i,j,k,sum=0;

    for(i=0;i<n;i++)
    {
        cin>>a>>b;
        sum+=min(a,b);
        p[i]=min(2*a,b)-min(a,b);
    }
    stable_sort(p,p+n,greater<int>());

    for(i=0;i<f;i++)
    {
        sum+=p[i];
    }

    cout<<sum<<endl;
}
