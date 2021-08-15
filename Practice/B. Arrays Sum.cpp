#include <bits/stdc++.h>
#define ll long long
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
const double pi = 2.0*acos(0.0);

using namespace std;

///Code starts from here
int main()
{
    fast_io;
    int t,kase=1;
    cin>>t;

    while(t--)
    {
        ll n,i,j=0,k;
        cin>>n>>k;
        ll a[n];

        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }

        for(i=0;i<n-1;i++)
        {
            if(a[i]<a[i+1]) j++;
        }
        if(j==0)
        {
            cout<<"1"<<endl;
        }
        else if(k==1&&j)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            ll ans=((j+k-2)/(k-1));
            cout<<ans<<endl;
        }
    }

    return 0;
}

