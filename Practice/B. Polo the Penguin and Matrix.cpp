#include <bits/stdc++.h>
#define ll long long

using namespace std;

///Code starts from here
int main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int n,d,m,i,j,k,cnt=0,ans=INT_MAX;
        cin>>n>>m>>d;
        int a[n*m];

        for(i=0;i<n*m;i++) cin>>a[i];

        for(i=0;i<n*m;i++)
        {
            cnt=0;
            for(j=0;j<n*m;j++)
            {
                if(abs(a[i]-a[j])%d==0&&i!=j)
                {
                    cnt+=abs(a[i]-a[j])/d;
                }
                else if(abs(a[i]-a[j])%d!=0)
                {
                    cout<<"-1"<<endl;
                    return 0;
                }
            }
            ans=min(ans,cnt);
        }
        cout<<ans<<endl;

    return 0;
}

