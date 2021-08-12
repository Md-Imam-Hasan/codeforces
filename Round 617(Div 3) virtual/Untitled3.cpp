#include <bits/stdc++.h>
#define ll long long
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
const double pi = 2.0*acos(0.0);

using namespace std;

///Code starts from here
int main()
{
    fast_io;
    int t,kase=1;
    cin>>t;

    while(t--)
    {
        int n,i,j,k,x=0,y=0,pp=0,qq=0;
        cin>>n;
        string s;
        cin>>s;
        pair<int,int>p;
        map<pair<int,int>,int>mp;
        p=make_pair(x,y);
        mp[p]=-1;
        bool ok=0;
        int mx=INT_MAX;

        for(i=0;i<n;i++)
        {
            if(s[i]=='L') x--;
            else if(s[i]=='R') x++;
            else if(s[i]=='D') y--;
            else if(s[i]=='U') y++;
            p=make_pair(x,y);
            if(mp[p]>0)
            {
                j=mp[p]+1;
                k=i+1;
                ok=1;
                if((k-j+1)<mx)
                {
                    pp=j;
                    qq=k;
                    mx=(qq-pp+1);
                }
                mp[p]=i+1;
            }
            else if(mp[p]==-1)
            {
                j=1;
                k=i+1;
                ok=1;
                if((k-j+1)<mx)
                {
                    pp=j;
                    qq=k;
                    mx=(qq-pp+1);
                }
                mp[p]=i+1;
            }
            else mp[p]=(i+1);
        }
        if(ok) cout<<pp<<" "<<qq<<endl;
        else cout<<"-1"<<endl;
        mp.clear();
    }

    return 0;
}
