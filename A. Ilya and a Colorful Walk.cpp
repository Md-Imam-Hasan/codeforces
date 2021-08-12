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
        ll n,i,j,k,cnt=0,cnt1=0;
        cin>>n;
        ll a[n];

        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }

        for(i=0;i<n-1;i++)
        {
            if(a[i]!=a[n-1])
            {
                cnt=n-1-i;
                break;
            }
        }
        for(i=n-1;i>0;i--)
        {
            if(a[i]!=a[0])
            {
                cnt1=i-0;
                break;
            }
        }
        cout<<max(cnt,cnt1)<<endl;

    }

    return 0;
}

