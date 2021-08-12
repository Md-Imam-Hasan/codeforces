#include <bits/stdc++.h>
#define ll long long
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
const double pi =     2.0*acos(0.0);

using namespace std;

///Code starts from here
int main()
{
    fast_io;
    int t,kase=1;
    cin>>t;

    while(t--)
    {
        ll n,i,j,k,d;
        cin>>n>>d;
        ll a[n];

        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        ll sum=a[0];
        i=1;
        while(d)
        {
            if(i<n)
            {sum+=(min((d/i),a[i]));
            d-=min((d/i),a[i])*i;
            i++;
            }
            if(i==n||d<=0) break;
        }
        cout<<sum<<endl;
    }

    return 0;
}

