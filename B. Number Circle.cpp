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
        ll n,i,j,k;
        cin>>n;
        ll a[n];
        vector<ll>v;

        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);

        if(a[n-3]+a[n-2]>a[n-1])
        {
            cout<<"YES"<<endl;
            for(i=0;i<n-2;i++) cout<<a[i]<<" ";
            cout<<a[n-1]<<" "<<a[n-2]<<endl;
        }
        else cout<<"NO"<<endl;
    }

    return 0;
}

