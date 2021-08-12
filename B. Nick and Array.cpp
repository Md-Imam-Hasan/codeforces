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
    //cin>>t;

    while(t--)
    {
        ll n,i,j,k,m=0;
        cin>>n;
        ll a[n];

        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]>=0)
            {
                a[i]=-a[i]-1;
            }
            if(m>a[i])
            {
                m=a[i];
                j=i;
            }
        }
        if(n%2) a[j]=-a[j]-1;
        for(i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;

    }

    return 0;
}

