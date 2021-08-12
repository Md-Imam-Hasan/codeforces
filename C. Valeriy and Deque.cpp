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
    //cin>>t;

    while(t--)
    {
        ll n,i,j,k,q,x,mx=INT_MIN;
        cin>>n>>q;
        vector<ll>v,v1,qv;
        vector<pair<ll,ll>>pv;
        for(i=0;i<n;i++)
        {
            cin>>x;
            v.push_back(x);
            mx=max(mx,x);
        }
        ///reverse(v.begin(),v.end());
        stack<ll>st;
        st.push(v[0]);
        for(i=1;i<n;i++)
        {
            x=st.top();
            if(v[i]>=x)
            {
                v1.push_back(x);
                st.pop();
                st.push(v[i]);
            }
            else
            {
                v1.push_back(v[i]);
            }
            pv.push_back(make_pair(x,v[i]));
        }
        while(q--)
        {
            cin>>x;
            if(x<n)
            {
                cout<<pv[x-1].first<<" "<<pv[x-1].second<<endl;
            }
            else
            {
                x-=n;
                x%=(n-1);
                cout<<mx<<" "<<v1[x]<<endl;
            }
        }
        /*cout<<"Case "<<kase<<": "<<ans<<endl;
        kase++;
        if(t) cout<<"\n";*/
    }

    return 0;
}
