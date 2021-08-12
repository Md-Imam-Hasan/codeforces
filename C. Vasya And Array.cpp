#include <bits/stdc++.h>
#define ll long long
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
const double pi =     2.0*acos(0.0);

using namespace std;
const ll N=1005;
ll a[N],ans[N],x[N],y[N];
///Code starts from here
int main()
{
    fast_io;
    int t=1,kase=1;

    while(t--)
    {
        ll n,m,i,j,k=0,p,l,r;
        cin>>n>>m;
        while(m--)
        {
            cin>>p>>l>>r;
            if(p)
            {
                for(i=l;i<r;i++) a[i]=1;
            }
            else
            {
                k++;
                x[k]=l;
                y[k]=r;
            }
        }
        memset(ans,-1,sizeof(ans));

        ans[1]=n;
        for(i=2;i<=n;i++)
        {
            if(a[i-1])
            {
                ans[i]=ans[i-1];
            }
            else ans[i]=ans[i-1]-1;
        }

        for(i=1;i<=k;i++)
        {
            if(ans[x[i]]==ans[y[i]])
            {
                cout<<"NO"<<endl;
                return 0;
            }
        }
        cout<<"YES"<<endl;
        for(i=1;i<=n;i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
