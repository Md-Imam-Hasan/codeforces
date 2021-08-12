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

    while(t--)
    {
        ll n,i,j,k,sum=0,best=0,best1=0,sum1=0,mx=0;
        cin>>n;
        ll a[n];

        for(i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }

        for(i=1;i<n;i++)
        {
            sum1=max(a[i],sum1+a[i]);
            best=max(best,sum1);
        }
        sum1=0;
        for(i=0;i<n-1;i++)
        {
            sum1=max(a[i],sum1+a[i]);
            best1=max(best1,sum1);
        }

        mx=max(best1,best);
        if(mx>=sum) cout<<"NO";
        else cout<<"YES";
        if(t) cout<<"\n";
    }

    return 0;
}
