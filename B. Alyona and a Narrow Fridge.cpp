#include <bits/stdc++.h>
#define ll long long
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
const double pi =     2.0*acos(0.0);

using namespace std;

///Code starts from here
int main()
{
    fast_io;
    int t=1,kase=1;

    while(t--)
    {
        ll n,i,j,h,k=0;
        cin>>n>>h;
        ll a[n];

        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=1;i<=n;i++)
        {
            sort(a,a+i,greater<ll>());

            ll sum=0;
            for(j=0;j<i;j+=2)
            {
                sum+=a[j];
            }
            //cout<<sum<<endl;
            if(sum<=h)
                k=i;
            else break;
        }
        cout<<k<<endl;
    }

    return 0;
}

