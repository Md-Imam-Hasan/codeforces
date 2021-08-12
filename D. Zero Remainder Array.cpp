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
        ll n,i,j,k,x,y;
        cin>>n>>k;
        ll a[n];
        vector<ll>v,ans;

        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]%k)
            {
                x=k-(a[i]%k);
                v.push_back(x);
            }
        }
        sort(v.begin(),v.end());
        map<ll,ll>mp;
        x=0;
        for(i=0;i<v.size();i++)
        {
            if(!mp[v[i]])
            {
                ans.push_back(v[i]);
                x=v[i];
                mp[v[i]]++;
            }
            else
            {
                x+=k;
                ans.push_back(x);
            }
        }
        sort(ans.begin(),ans.end());

        if(ans.size()) cout<<ans[ans.size()-1]+1<<endl;
        else cout<<"0"<<endl;
    }

    return 0;
}

