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
    t=1;

    while(t--)
    {
        ll n,m,i,j,k,sx,sy;
        cin>>n>>m>>sx>>sy;
        ll p=n*m;
        ll a[n+1][m+1];
        memset(a,0,sizeof(a));
        a[sx][sy]=1;
        a[1][sy]=1;
        cout<<sx<<" "<<sy<<endl;
        cout<<"1 "<<sy<<endl;
        for(i=1;i<=n;i++)
        {
            if(i%2==1)
            for(j=1;j<=m;j++)
            {
                if(!a[i][j])
                {
                    cout<<i<<" "<<j<<endl;
                    a[i][j]==1;
                }
            }
            else
            {
                for(j=m;j>=1;j--)
            {
                if(!a[i][j])
                {
                    cout<<i<<" "<<j<<endl;
                    a[i][j]==1;
                }
            }
            }
        }

    }

    return 0;
}
