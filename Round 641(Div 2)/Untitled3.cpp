#include <bits/stdc++.h>
#define ll long long

using namespace std;

///Code starts from here
int main()
{
        ll n,i,j,k;
        cin>>n;
        ll a[n],b[n],ans[n];

        for(i=0;i<n;i++) cin>>a[i];

        b[n-1]=a[n-1];

        for(i=n-2;i>=0;i--)
        {
            b[i]=__gcd(a[i],b[i+1]);
        }

        for(i=0;i<n-1;i++)
        {
            ans[i]=(a[i]*b[i+1])/__gcd(a[i],b[i+1]);
        }

        ll value=ans[0];

        for(i=1;i<n-1;i++)
        {
            value=__gcd(value,ans[i]);
        }

        cout<<value<<"\n";

    return 0;
}
