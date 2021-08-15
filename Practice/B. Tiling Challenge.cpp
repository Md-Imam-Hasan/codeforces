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
        ll n,i,j,k,flag=0;
        cin>>n;
        char a[n][n];

        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
                cin>>a[i][j];
        }

        for(i=1;i<n-1;i++)
        {
            for(j=1;j<n-1;j++)
            {
                if(a[i][j]=='.')
                {
                    if(a[i-1][j]=='.'&&a[i+1][j]=='.'&&a[i][j-1]=='.'&&a[i][j+1]=='.')
                    {
                        a[i][j]='#';
                        a[i-1][j]='#';
                        a[i+1][j]='#';
                        a[i][j-1]='#';
                        a[i][j+1]='#';
                    }
                }
            }
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(a[i][j]=='.')
                {
                    flag=1;
                    break;
                }
            }
        }
        if(flag) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
        /*cout<<"Case "<<kase<<": "<<ans<<endl;
        kase++;
        if(t) cout<<"\n";*/
    }

    return 0;
}

