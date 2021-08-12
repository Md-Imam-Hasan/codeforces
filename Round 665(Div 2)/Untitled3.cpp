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
        ll n,i,j,k=0,mn=INT_MAX;
        cin>>n;
        ll a[n],b[n];
        vector<ll>v;

        for(i=0;i<n;i++)
        {
            cin>>a[i];
            b[i]=a[i];
            mn=min(mn,a[i]);
        }
        sort(b,b+n);
        for(i=0;i<n;i++)
        {
            if(a[i]!=b[i])
            {
                v.push_back(a[i]);
            }
        }
        for(i=0;i<v.size();i++)
        {
            if(v[i]%mn) k=1;
        }
        if(k) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
        /*cout<<"Case "<<kase<<": "<<ans<<endl;
        kase++;
        if(t) cout<<"\n";*/
    }

    return 0;
}
