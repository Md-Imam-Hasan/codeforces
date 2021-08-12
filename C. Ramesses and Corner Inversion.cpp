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
        int n,i,j,m,k,l,x1,x2,y1,y2;
        cin>>n>>m;
        int a[n][m],b[n][m];

        for(i=0;i<n;i++)
            for(j=0;j<m;j++)
                cin>>a[i][j];

        for(i=0;i<n;i++)
            for(j=0;j<m;j++)
                cin>>b[i][j];


        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(a[i][j]!=b[i][j])
                {
                    a[i][j]^=1;
                    a[0][j]^=1;
                    a[i][0]^=1;
                    a[0][0]^=1;
                }
            }
        }

        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(a[i][j]!=b[i][j])
                {
                    cout<<"No"<<endl;
                    return 0;
                }
            }
        }
        cout<<"Yes"<<endl;
    }

    return 0;
}

