#include <bits/stdc++.h>
#define ll long long

using namespace std;
const int N = 2e5 + 5;

///Code starts from here
int main()
{
        int n,i,j,k,cnt=0,ans=0;
        cin>>n;
        int a[n],b[n],pos[N];
        map<int,int>mp;

        for(i=0;i<n;i++)
        {
             cin>>a[i];
             pos[a[i]]=i;
        }
        for(i=0;i<n;i++) cin>>b[i];

        for(i=0;i<n;i++)
        {
            cnt=pos[b[i]]-i;
            if(cnt<0) cnt+=n;
            mp[cnt]++;
        }

        for(auto &it:mp)
        {
            ans=max(ans, it.second);
        }
        cout<<ans<<"\n";


    return 0;
}
