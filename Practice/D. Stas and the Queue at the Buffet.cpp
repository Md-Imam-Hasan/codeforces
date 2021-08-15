#include <bits/stdc++.h>
#define ll long long
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
const double pi =     2.0*acos(0.0);

using namespace std;

///Code starts from here
bool cmp(const pair<ll,ll>&a,const pair<ll,ll>&b)
{
    return a.second<b.second;
}
int main()
{
    fast_io;
    int t=1,kase=1;

    while(t--)
    {
        ll n,i,j,k,x,y;
        cin>>n;
        vector<ll>v;
        ll sum=0;

        for(i=0;i<n;i++)
        {
            cin>>x>>y;
            sum+=(y*n-x);
            v.push_back(x-y);
        }
        sort(v.begin(),v.end(),greater<ll>());
        for(i=0;i<n;i++)
        {
            sum+=(v[i]*(i+1));
        }
        cout<<sum<<endl;

    }

    return 0;
}

