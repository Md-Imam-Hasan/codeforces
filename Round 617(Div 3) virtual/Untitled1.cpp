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
        ll n,i,j,k=0;
        cin>>n;
        ll a[n];
        int sum=0;

        for(i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
            if(a[i]%2) k++;
        }
        if(sum%2) cout<<"YES"<<endl;
        else
        {
            if(k&&k!=n) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }

    return 0;
}
