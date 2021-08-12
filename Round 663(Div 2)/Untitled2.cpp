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
    cin>>t;

    while(t--)
    {
        ll n,m,i,j,k=0;
        cin>>n>>m;
        char a[n][m];

        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
                cin>>a[i][j];
        }

        for(i=0;i<n;i++)
        {
            if(a[i][m-1]=='R') k++;
        }

        for(j=0;j<m;j++)
        {
            if(a[n-1][j]=='D') k++;
        }

        cout<<k<<endl;
        /*cout<<"Case "<<kase<<": "<<ans<<endl;
        kase++;
        if(t) cout<<"\n";*/
    }

    return 0;
}
