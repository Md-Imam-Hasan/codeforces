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
        ll n,i,j,k,ones=0,zeros=0;
        cin>>n;
        ll a[n];

        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]==1) ones++;
            else zeros++;
        }
        if(ones<=n/2)
        {
            cout<<n-ones<<endl;
            for(i=0;i<n-ones;i++) cout<<"0 ";
            cout<<endl;
        }
        else
        {
            if(ones%2) cout<<n-zeros-1<<endl,k=n-zeros-1;
            else cout<<n-zeros<<endl,k=n-zeros;
            for(i=0;i<k;i++) cout<<"1 ";
            cout<<endl;
        }


    }

    return 0;
}
