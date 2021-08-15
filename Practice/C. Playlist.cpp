#include <bits/stdc++.h>
#define ll long long
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
const double pi = 2.0*acos(0.0);

using namespace std;

///Code starts from here
int main()
{
    fast_io;
    int n,i,k,x,y;
    cin>>n>>k;
    vector<pair<int,int>>vp;
    ll ans=0,sum=0;

    for(i=0;i<n;i++)
    {
        cin>>x>>y;
        vp.push_back(make_pair(y,x));
        ///ans=max(ans,(x*y));
    }
    sort(vp.begin(),vp.end(),greater<pair<int,int>>());
    set<pair<int,int>>st;
    for(i=0;i<n;i++)
    {
        st.insert(make_pair(vp[i].second,i));
        sum+=vp[i].second;
        while(st.size()>k)
        {
            auto it=st.begin();
            sum-=it->first;
            st.erase(it);
        }

        ans=max(ans,sum*vp[i].first);
    }

    cout<<ans<<endl;

    return 0;
}

