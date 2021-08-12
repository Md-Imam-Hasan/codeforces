#include <bits/stdc++.h>
#define ll long long
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
const double pi =     2.0*acos(0.0);

using namespace std;

///Code starts from here
int main()
{
    fast_io;
    int t,kase=1;
    cin>>t;

    while(t--)
    {
        ll n,i,j,k,mns=0;
        cin>>n;
        ll sum=0;
        ll a[n];

        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        vector<ll>v;
        ll ans=0;
        for(i=1;i<n;i++)
        {
            if(a[i]>=0&&a[i-1]>=0)
            {
                ans=max(ans,abs(a[i]-a[i-1]));
            }
            else if(a[i]>=0&&a[i-1]==-1)
            {
                v.push_back(a[i]);
            }
            else if(a[i]==-1&&a[i-1]>=0)
            {
                v.push_back(a[i-1]);
            }
        }
        sort(v.begin(),v.end());

        if(v.size())
        {
            ll mn=v[0];
            ll mx=v[v.size()-1];
            k=(mn+mx)/2;
            ans=max(ans,abs(mx-k));
            cout<<ans<<" "<<k<<endl;
        }
        else cout<<"0 0"<<endl;


    }

    return 0;
}
