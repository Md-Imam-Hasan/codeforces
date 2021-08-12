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
        int n,i,j,k,ans=INT_MAX,cnt=0;
        string s,p="ACTG";
        cin>>n>>s;

        for(i=0;i<=s.size()-4;i++)
        {
            cnt=0;
            for(j=0;j<4;j++)
            {
                int temp=0;
                if(s[i+j]!=p[j])
                {
                    temp=abs(s[i+j]-p[j]);
                    temp=min(temp,s[i+j]-'A'+'Z'-p[j]+1);
                    temp=min(temp,'Z'-s[i+j]+p[j]-'A'+1);
                }
                cnt+=temp;
            }
            ans=min(ans,cnt);
        }
        cout<<ans<<endl;

    }

    return 0;
}

