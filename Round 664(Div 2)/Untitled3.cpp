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
    //cin>>t;

    while(t--)
    {
        ll n,i,j,k,m,value=INT_MAX,ad=0,flg=0;
        cin>>n>>m;
        ll a[n],b[m],c[n];

        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<m;i++)
        {
            cin>>b[i];
        }

        for(k=0;k<512;k++)
        {
            ad=0;
            for(i=0;i<n;i++)
            {
                flg=0;
                for(j=0;j<m;j++)
                {
                    if(((a[i]&b[j])|k)==k)
                    {
                        flg=1;
                        break;
                    }
                }
                if(!flg)
                {
                    ad=1;
                    break;
                }
            }
            if(!ad)
            {
                cout<<k<<endl;
                break;
            }
        }
    }

    return 0;
}
