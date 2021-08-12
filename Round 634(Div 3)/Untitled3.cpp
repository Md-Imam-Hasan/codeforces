#include <bits/stdc++.h>
#define ll long long

using namespace std;

///Code starts from here

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,i,j,k,ans=0,l;
        cin>>n;
        int a[n];
        map<int,int>mp;
        vector<pair<int,int>>v;

        for(i=0;i<n;i++)
        {
            cin>>a[i];
            mp[a[i]]++;
        }
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            v.push_back(make_pair(it->second,it->first));
        }
        l=mp.size();
        //cout<<"length "<<l<<endl;
        sort(v.begin(),v.end());

        for(auto it=v.rbegin();it!=v.rend();it++)
        {
           // cout<<"freq "<<it->first<<endl;
            if(it->first>l) ans=max(ans,(l));
            else if(it->first==l) ans=max(ans,(l-1));
            else if(it->first<l) ans=max(ans,(it->first));
            break;
        }

        cout<<ans;
        if(t) cout<<"\n";
    }

    return 0;
}
