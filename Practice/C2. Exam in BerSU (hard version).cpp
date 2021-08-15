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
    ///cin>>t;

    while(t--)
    {
        ll n,m,i,j,k,sum=0,temp;
        cin>>n>>m;
        ll a[n];
        vector<ll>v;
        ll ans[n];

        for(i=0;i<n;i++)
        {
            cin>>a[i];
            sum=a[i];
            sort(a,a+i);
            for(j=0;j<i;j++)
            {
                if(sum+a[j]>m) break;
                else sum+=a[j];
            }
            cout<<i-j<<" ";
        }
        cout<<endl;


    }

    return 0;
}
