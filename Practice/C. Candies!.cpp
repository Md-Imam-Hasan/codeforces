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
        ll n,q,i,j,k,x,y,candy1,candy2,left1,left2,candy,deg,cur=1;
        cin>>n;
        vector<pair<ll,ll>>dp[20];

        for(i=0;i<n;i++)
        {
            cin>>x;
            dp[0].push_back(make_pair(x,0));
        }

        for(deg=1;deg<20;deg++)
        {
            cur*=2;
            for(i=0;i+cur<=n;i++)
            {
                left1=dp[deg-1][i].first;
                left2=dp[deg-1][i+cur/2].first;
                candy1=dp[deg-1][i].second;
                candy2=dp[deg-1][i+cur/2].second;
                candy=candy1+candy2;
                x=left1+left2;
                if(x>=10) candy++;
                dp[deg].push_back(make_pair(x%10,candy));
            }
        }

        cin>>q;

        while(q--)
        {
            cin>>x>>y;
            k=y-x+1;
            deg=0;
            while(k%2==0)
            {
                deg++;
                k/=2;
            }
            cout<<dp[deg][x-1].second<<endl;
        }
    }

    return 0;
}

