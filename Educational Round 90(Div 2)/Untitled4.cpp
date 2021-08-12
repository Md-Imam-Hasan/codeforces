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
        ll n,i,j,k;
        cin>>n;
        ll a[n];
        ll sum=0;

        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(i%2==0)
                sum+=a[i];
        }

        ll sum1=0;
        ll mx=0;
        for(i=1;i<n;i+=2)
        {
            sum1=max(0LL,sum1+a[i]-a[i-1]);
            mx=max(mx,sum1);
        }
        sum1=0;
        for(i=1;i<n-1;i+=2)
        {
            sum1=max(0LL,sum1+a[i]-a[i+1]);
            mx=max(mx,sum1);
        }

        cout<<sum+mx<<endl;

    }

    return 0;
}

