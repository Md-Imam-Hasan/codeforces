#include <bits/stdc++.h>
#define ll long long
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
const double pi = 2.0*acos(0.0);

using namespace std;

///Code starts from here
int main()
{
    fast_io;
    int t=1,kase=1;


    while(t--)
    {
        ll n,i,j,k,mx=0,cnt=0,x,n1;
        cin>>n;

        n1=n;
        vector<ll>v,ans;
        bool a[n+1];
        memset(a,0,sizeof(a));
        ll sum=0;

        for(i=0;i<n-1;i++)
        {
            cin>>k;

            v.push_back(k);
            sum+=k;
            mx=min(mx,sum);
        }
        ans.push_back(1-mx);

        for(i=0;i<n-1;i++)
        {
            ans.push_back(ans[i]+v[i]);
        }

        bool ok=1;
        set<ll>st;
        for(i=0;i<n;i++)
        {
            if(ans[i]<1||ans[i]>n)
            {
                ok=0;
                break;
            }
            st.insert(ans[i]);
        }
        if(st.size()==n&&ok)
        {
            for(auto y:ans) cout<<y<<" ";
            cout<<endl;
        }
        else cout<<"-1"<<endl;

    }

    return 0;
}
