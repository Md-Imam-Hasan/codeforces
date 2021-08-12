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
        ll n,m,i,j,k,cnt=0,ans=0,cur;
        cin>>n>>m>>k;
        ll p[m],r[m];

        for(i=0;i<m;i++)
        {
            cin>>p[i];
            ///r[i]=p[i]%k;
        }
        for(i=0;i<m;i++)
        {
            cur=((p[i]-cnt-1)/k+1)*k+cnt;
            while(cur>=p[i])
            {
                cnt++;
                i++;
            }
            i--;
            ans++;
        }
        cout<<ans<<endl;
    }

    return 0;
}
