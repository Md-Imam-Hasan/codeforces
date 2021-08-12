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
        ll n,r,i,j,k,cnt=0,x=0,ans=0;
        cin>>n>>r;
        int a[n];
        map<int,bool>mp;
        vector<int>v;

        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(!mp[a[i]]) v.push_back(a[i]);
            mp[a[i]]=true;
        }
        sort(v.begin(),v.end());

        for(i=v.size()-1;i>=0;i--)
        {
            if(cnt==v.size())
            {
                break;
            }
            else
            {
                mp[v[i]]=false;
                cnt++;
                ans++;
                if(cnt==v.size()) break;
                for(j=1;j<=r;j++)
                {
                    x++;
                    if(mp[x])
                    {
                        cnt++;
                        if(cnt==v.size()) break;
                    }
                }
            }
        }
        cout<<ans;
        if(t) cout<<"\n";
    }

    return 0;
}

