#include <bits/stdc++.h>
#define ll long long
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

///Code starts from here
int main()
{
    fast_io;
      ll n,i,j,k;
        cin>>n;
        string s;
        cin>>s;
        int a[n],b[n];

        for(i=0;i<n;i++)
        {
            cin>>b[i]>>a[i];
        }
        int cnt=0;
        for(i=0;i<n;i++)
            if(s[i]=='1')
            cnt++;
        int ans=cnt;
        for(i=0;i<150;i++)
        {
            for(j=0;j<n;j++)
            {
                if(a[j]==i)
                {
                    s[j]^=1;
                    if(s[j]=='1')
                    {
                        cnt++;
                    }
                    else cnt--;
                    a[j]+=b[j];
                }
            }
            ans=max(ans,cnt);
        }

        cout<<ans<<endl;

    return 0;
}
