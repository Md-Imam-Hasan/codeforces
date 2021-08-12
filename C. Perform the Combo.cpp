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
        ll n,m,i,j,k,x;
        cin>>n>>m;
        int a[26];
        memset(a,0,sizeof(a));
        string s;
        cin>>s;
        map<int,int>mp;
        map<int,int>::iterator it;

        for(i=0;i<m;i++)
        {
            cin>>x;
            mp[x]++;
        }
        int cnt=1;
        for(i=n-1;i>=0;i--)
        {
            if(mp[i+1]>0)
            {
                cnt+=mp[i+1];
                if(a[s[i]-97]==0) a[s[i]-97]=cnt;
                else a[s[i]-97]+=cnt;
            }
            else
            {
                if(a[s[i]-97]==0) a[s[i]-97]=cnt;
                else a[s[i]-97]+=cnt;
            }
        }
        for(i=0;i<26;i++)
        {
            cout<<a[i]<<" ";
        }
        if(t) cout<<"\n";
    }

    return 0;
}
