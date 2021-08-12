#include <bits/stdc++.h>
#define ll long long

using namespace std;

///Code starts from here
int main()
{
    int t;
    cin>>t;

    A:
    while(t--)
    {
        ll n,m,h,i,j,k,flag;
        cin>>n>>m;
        string a[n];

        for(i=0;i<n;i++) cin>>a[i];

        string ans=a[0];

        for(i=0;i<m;i++)
        {
            char x=ans[i];
            for(char c='a';c<='z';c++)
            {
                ans[i]=c;
                flag=1;
                for(j=0;j<n;j++)
                {
                    int cnt=0;
                    for(k=0;k<m;k++)
                    {
                        if(a[j][k]!=ans[k])
                            cnt++;
                    }
                    if(cnt>1)
                    {
                        flag=0;
                        break;
                    }
                }
                if(flag)
                {
                    cout<<ans;
                    if(t) cout<<"\n";
                    goto A;
                }
            }
            ans[i]=x;
        }
        cout<<"-1";
        if(t) cout<<"\n";
    }

    return 0;
}
