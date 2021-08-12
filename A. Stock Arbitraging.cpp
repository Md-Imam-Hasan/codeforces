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
        ll n,m,r,i,j,k,mn=INT_MAX,mx=INT_MIN,cnt;
        cin>>n>>m>>r;
        ll a[n],b[m];

        for(i=0;i<n;i++)
        {
            cin>>a[i];
            mn=min(mn,a[i]);
        }
        for(i=0;i<m;i++)
        {
            cin>>b[i];
            mx=max(mx,b[i]);
        }
        cnt=r/mn;
        if(mx>mn)
        {
            r-=(cnt*mn);
            r+=(cnt*mx);
            cout<<r<<endl;
        }
        else cout<<r<<endl;

        /*cout<<"Case "<<kase<<": "<<ans<<endl;
        kase++;
        if(t) cout<<"\n";*/
    }

    return 0;
}

