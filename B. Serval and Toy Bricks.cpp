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
        ll n,i,j,k,m,h;
        cin>>n>>m>>h;
        ll a[m],b[n],t[n][m];

        for(i=0;i<m;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<n;i++)
        {
            cin>>b[i];
        }
        for(i=0;i<n;i++)
            for(j=0;j<m;j++)
                cin>>t[i][j];

        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(t[i][j]==1&&b[i]>=a[j])
                    t[i][j]=a[j];
                else if(t[i][j]==1)
                    t[i][j]=b[i];
            }
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                cout<<t[i][j]<<" ";
            }
            cout<<endl;
        }
    }

    return 0;
}

