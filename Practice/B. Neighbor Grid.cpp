#include <bits/stdc++.h>
#define ll long long
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

///Code starts from here
int main()
{
    fast_io;
    int t;
    cin>>t;

    while(t--)
    {
        ll n,m,i,j,k,flag=0;
        cin>>n>>m;
        int a[n][m];

        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                cin>>a[i][j];
                if(a[i][j]>4) flag=1;
            }
        }

        for(i=0;i<m;i++)
        {
            if(i==0||i==m-1)
            {
                if(a[0][i]>2||a[n-1][i]>2)
                {
                    flag=1;
                    break;
                }
                a[0][i]=2;
                a[n-1][i]=2;
            }
            else
            {
                if(a[0][i]>3||a[n-1][i]>3)
                {
                    flag=1;
                    break;
                }
                a[0][i]=3,a[n-1][i]=3;
            }
        }

        for(i=1;i<n-1;i++)
        {
            if(a[i][0]>3||a[i][m-1]>3)
                {
                    flag=1;
                    break;
                }
            a[i][0]=3;
            a[i][m-1]=3;
        }

        if(flag)
        {
            cout<<"NO"<<endl;

        }
        else
        {
            cout<<"YES"<<endl;
            for(i=0;i<n;i++)
            {
                for(j=0;j<m;j++)
                {
                    if(i==0||j==0||i==n-1||j==m-1) cout<<a[i][j]<<" ";
                    else cout<<"4 ";
                }
                cout<<endl;
            }
        }

        ///if(t) cout<<"\n";
    }

    return 0;
}
