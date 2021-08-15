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
        ll n,m,i,j,k,l,odd=0,even=0,odeven=0,ans=0;
        cin>>n>>m;
        ll a[n][m];
        bool ok=0;

        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
            ans^=a[i][0];
            for(j=1;j<m;j++)
            {
                if(a[i][j]!=a[i][0])
                {
                    k=j;
                    l=i;
                    ok=1;
                    break;
                }
            }
        }

        if(ans)
        {
            cout<<"TAK"<<endl;
            for(i=0;i<n;i++) cout<<"1 ";
            cout<<endl;
        }
        else if(ans==0&&ok)
        {
            ans^=a[l][0];
            ans^=a[l][k];
            if(ans)
            {
                cout<<"TAK"<<endl;
                for(i=0;i<n;i++)
                {
                    if(i==l)
                    {
                        cout<<k+1<<" ";
                    }
                    else cout<<"1 ";
                }
                cout<<endl;
            }
            else cout<<"NIE"<<endl;
        }
        else cout<<"NIE"<<endl;
    }

    return 0;
}

