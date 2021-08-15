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
        ll n,m,i,j,k;
        cin>>n>>m;
        char a[n][m];

        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
                cin>>a[i][j];
        }

        vector<int>cnt1(n),cnt2(m);

        for(i=0;i<n;i++)
            for(j=0;j<m;j++)
        {
            cnt1[i]+=(a[i][j]=='.');
            cnt2[j]+=(a[i][j]=='.');
        }

        int ans=INT_MAX;

        for(i=0;i<n;i++)
            for(j=0;j<m;j++)
        {
            ans=min(ans,cnt1[i]+cnt2[j]-(a[i][j]=='.'));
        }

        cout<<ans;
        if(t) cout<<"\n";
    }

    return 0;
}

