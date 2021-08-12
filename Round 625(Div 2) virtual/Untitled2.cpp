#include <bits/stdc++.h>
#define ll long long
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

///Code starts from here
bool cmp(const pair<ll,ll>&a,const pair<ll,ll>&b)
{
    if(a.first==b.first)
        return a.second>b.second;
    else return a.first<b.first;
}
int main()
{
    fast_io;
    ll n,i,j,k,sum=0,ans=0,x,y=0;
        cin>>n;
        ll b[n];
        vector<ll>v(n);
        map<ll,ll>mp;


        for(i=0;i<n;i++)
        {
            cin>>b[i];
            mp[i-b[i]]+=b[i];
        }
        for(auto it:mp)
        {
            sum=max(sum,it.second);
        }
        cout<<sum<<endl;



    return 0;
}
