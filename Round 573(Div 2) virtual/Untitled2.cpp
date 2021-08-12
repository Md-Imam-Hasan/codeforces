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
        int n,i,j,k,ans=INT_MAX;
        string s[3];
        map<string,int>mp;

        int a[3],b[3];
        char c[3];

        for(i=0;i<3;i++)
        {
            cin>>s[i];
            a[i]=(s[i][0]-'0');
            b[i]=a[i];
            c[i]=s[i][1];
            mp[s[i]]++;
        }
        sort(a,a+3);
        if(mp.size()==1) ans=min(ans,0);
        else if(mp.size()==2) ans=min(ans,1);
        else if(c[0]==c[1]&&c[1]==c[2])
        {
            if(a[0]==a[1]&&a[1]==a[2])
            {
                ans=min(ans,0);
            }
            else if(a[0]+1==a[1]&&a[1]+1==a[2])
            {
                ans=min(ans,0);
            }
            else
            {
                if(a[0]+1==a[1]||a[1]+1==a[2]||a[0]+2==a[1]||a[1]+2==a[2])
                {
                    ans=min(ans,1);
                }
                else ans=min(ans,2);
            }
        }
        else if(c[0]==c[1])
        {
            if((b[0]+1==b[1]||b[1]+1==b[0])||(b[0]+2==b[1]||b[1]+2==b[0]))
            {
                ans=min(ans,1);
            }
            else ans=min(ans,2);

        }
        else if(c[1]==c[2])
        {
            if((b[1]+1==b[2]||b[2]+1==b[1])||(b[1]+2==b[2]||b[2]+2==b[1]))
            {
                ans=min(ans,1);
            }
            else ans=min(ans,2);
        }
        else if(c[0]==c[2])
        {
            if((b[0]+1==b[2]||b[2]+1==b[0])||(b[0]+2==b[2]||b[2]+2==b[0]))
            {
                ans=min(ans,1);
            }
            else ans=min(ans,2);
        }
        else ans=min(ans,2);

        cout<<ans<<endl;
    }

    return 0;
}
