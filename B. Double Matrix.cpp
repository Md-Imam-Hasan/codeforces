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
        ll n,m,i,j,k,flag=0;
        cin>>n>>m;
        ll a[n][m],b[n][m];

        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
                cin>>a[i][j];
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
                cin>>b[i][j];
        }
        for(i=0;i<n;i++)
        {
            for(j=1;j<m;j++)
            {
                if(a[i][j-1]>=a[i][j]||b[i][j-1]>=b[i][j])
                {
                    if(a[i][j]>b[i][j-1]||b[i][j]>a[i][j-1])
                    {
                        swap(a[i][j-1],b[i][j-1]);
                        /*a[i][j-1]=a[i][j-1]+b[i][j-1];
                        b[i][j-1]=a[i][j-1]-b[i][j-1];
                        a[i][j-1]=a[i][j-1]-b[i][j-1];*/
                    }
                    if(a[i][j-1]<a[i][j]&&b[i][j-1]<b[i][j]) continue;
                    else
                    {
                        flag=1;
                        break;
                    }
                }
            }
            if(flag) break;
        }
        if(!flag)
        {
            for(i=0;i<m;i++)
            {
                for(j=1;j<n;j++)
                {
                    if(a[j-1][i]>=a[j][i]||b[j-1][i]>=b[j][i])
                    {
                        if(a[j][i]>b[j-1][i]||b[j][i]>a[j-1][i])
                        {
                            swap(a[j-1][i],b[j-1][i]);
                        }
                        if(a[j-1][i]<a[j][i]&&b[j-1][i]<b[j][i]) continue;
                        else
                        {
                            flag=1;
                            break;
                        }
                    }
                }
                if(flag) break;
            }
            if(flag)
            {
                cout<<"Impossible"<<endl;
            }
            else cout<<"Possible"<<endl;
        }
        else cout<<"Impossible"<<endl;
        /*cout<<"Case "<<kase<<": "<<ans<<endl;
        kase++;
        if(t) cout<<"\n";*/
    }

    return 0;
}
