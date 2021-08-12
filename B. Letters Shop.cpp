#include <bits/stdc++.h>
#define ll long long
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

///Code starts from here
int main()
{
    fast_io;
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<int>pos[26];
    int i,j,k;
    for(i=0;i<n;i++)
    {
        pos[s[i]-'a'].push_back(i+1);
    }

    int m;
    cin>>m;
    while(m--)
    {
        string t;
        cin>>t;
        vector<int>cnt(26);
        for(i=0;i<t.size();i++)
        {
            cnt[t[i]-'a']++;
        }

        int ans=0;

        for(j=0;j<26;j++)
        {
            if(cnt[j]>0)
                ans=max(ans,pos[j][cnt[j]-1]);
        }
        cout<<ans<<endl;
    }

    return 0;
}
