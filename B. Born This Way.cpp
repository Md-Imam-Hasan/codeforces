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
        ll n,m,ta,tb,i,j,k,x,ans=0;
        cin>>n>>m>>ta>>tb>>k;
        ll a[n],b[m];

        for(i=0;i<n;i++)
        {
            cin>>x;
            a[i]=x+ta;
        }
        for(i=0;i<m;i++)
        {
            cin>>b[i];
        }
        if(k>=n||k>=m)
        {
            cout<<"-1"<<endl;
            return 0;
        }

        for(i=0;i<=k;i++)
        {
            x=a[i];
            if(b[m-(k-i)-1]<x)
            {
                cout<<"-1"<<endl;
                return 0;
            }
            else
            {
                ll it=lower_bound(b,b+m,x)-b;
                ///cout<<it<<endl;
                ans=max(ans,b[it+(k-i)]+tb);
            }
        }
        cout<<ans<<endl;
        /*cout<<"Case "<<kase<<": "<<ans<<endl;
        kase++;
        if(t) cout<<"\n";*/
    }

    return 0;
}

