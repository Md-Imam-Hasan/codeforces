#include <bits/stdc++.h>
#define ll long long
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
const double pi = 2.0*acos(0.0);

using namespace std;

///Code starts from here
ll calc(vector<ll>v)
{
    sort(v.begin(),v.end());
    ll l=v.size();
    ll ans=0;
    for(ll i=0;i<l;i++)
    {
        ans+=(abs(v[i]-v[l/2]));
    }
    return ans;
}
int main()
{
    fast_io;
    int t,kase=1;
    cin>>t;

    while(t--)
    {
        ll n,i,j,i1,j1,k,m,x,y,ans=0;
        cin>>n>>m;
        ll a[n][m];
        k=n*m;
        ll sum=0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        x=n-1,y=m-1;
        for(i=0;i<=x;i++)
        {
            y=m-1;
            for(j=0;j<=y;j++)
            {
                vector<ll>v;
                v.push_back(a[i][j]);
                if(i!=x) v.push_back(a[x][j]);
                if(j!=y) v.push_back(a[i][y]);
                if(i!=x&&j!=y) v.push_back(a[x][y]);
                ans+=calc(v);
                y--;
            }
            x--;
        }
        cout<<ans<<endl;
    }

    return 0;
}

/* stuff you should look for
	* int overflow, array bounds
	* special cases (n=1?)
	* do smth instead of nothing and stay organized
	* WRITE STUFF DOWN
	* DON'T GET STUCK ON ONE APPROACH
*/

