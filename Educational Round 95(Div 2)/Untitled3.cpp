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
        ll n,i,j,k;
        cin>>n;
        ll a[n];
        bool b[n];
        vector<ll>v,ans;

        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<n;i++)
        {
            cin>>b[i];
            if(b[i]==0) v.push_back(a[i]);
        }
        sort(v.begin(),v.end());
        stack<ll>st;
        for(auto x:v)
        {
            st.push(x);
        }
        ll sum=0;
        for(i=0;i<n;i++)
        {
            if(b[i])
            {
                sum+=a[i];
                ans.push_back(a[i]);
            }
            else
            {
                k=st.top();
                sum+=k;
                ans.push_back(k);
                st.pop();
            }
        }
        for(auto x:ans) cout<<x<<" ";
        cout<<endl;
    }

    return 0;
}
