#include <bits/stdc++.h>
#define ll long long
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
const double pi =     2.0*acos(0.0);

using namespace std;

///Code starts from here
const int N=1e5+2;
ll cnt[N],color[N];
int main()
{
    fast_io;
    int t=1,kase=1;


    while(t--)
    {
        ll n,i,j,k,x,flg=0,mx=INT_MIN,ans;
        cin>>n;

        for(i=1;i<=n;i++)
        {
            cin>>x;
            cnt[color[x]]--;
            color[x]++;
            cnt[color[x]]++;
            mx=max(mx,color[x]);
            flg=0;
            if(cnt[1]==i)
                flg=1;
            else if(cnt[i]==1)
                flg=1;
            else if(cnt[1]==1&&cnt[mx]*mx==i-1)
                flg=1;
            else if(cnt[mx-1]*(mx-1)==i-mx&&cnt[mx]==1)
                flg=1;
            if(flg)
                ans=i;
        }
        cout<<ans<<endl;
        /*cout<<"Case "<<kase<<": "<<ans<<endl;
        kase++;
        if(t) cout<<"\n";*/
    }

    return 0;
}
