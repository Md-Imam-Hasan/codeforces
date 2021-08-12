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
        ll n,i,j,k,m,x;
        cin>>n>>m;
        ll a[n][m],b[m][n];

        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
                cin>>a[i][j];
        }
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
                cin>>b[i][j];
        }
        bool ok=0;
        for(i=0;i<n;i++)
        {
            x=b[0][i];
            ok=0;
            for(j=0;j<n;j++)
            {
                for(k=0;k<m;k++)
                {
                    if(x==a[j][k])
                    {
                        ok=1;
                        break;
                    }
                }
                if(ok) break;
            }
            for(k=0;k<m;k++)
            {
                cout<<a[j][k]<<" ";
            }
            cout<<endl;
        }
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
