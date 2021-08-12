#include <bits/stdc++.h>
#define ll long long
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
const double pi = 2.0*acos(0.0);

using namespace std;

///Code starts from here
int main()
{
    fast_io;
    int t=1,kase=1;

    while(t--)
    {
        ll n,i=0,j,k=0;
        cin>>n;
        ll a[n];
        vector<ll>v(n);

        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        //cout<<(n-1)/2<<endl;
        for(i=0,j=1;j<n;j+=2)
        {
            v[j]=a[i];
            i++;
        }
        ///if(n%2==0) i--;
        for(j=0;j<n;i++,j+=2)
        {
            if(a[i]) v[j]=a[i];
        }

        for(i=1;i<n-1;i++)
        {
            if(v[i]<v[i-1]&&v[i]<v[i+1]) k++;
        }
        cout<<k<<endl;
        for(auto x:v) cout<<x<<" ";
        cout<<endl;
    }

    return 0;
}
