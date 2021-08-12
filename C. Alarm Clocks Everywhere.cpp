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

    while(t--)
    {
        ll n,m,i,j,k,flag=0;
        cin>>n>>m;
        ll a[n],p[m];
        vector<ll>v;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<m;i++)
        {
            cin>>p[i];
        }
        for(i=1;i<n;i++)
        {
            v.push_back(a[i]-a[i-1]);
        }
        ll g=v[0];
        for(i=1;i<v.size();i++)
        {
            g=__gcd(g,v[i]);
        }
        for(i=0;i<m;i++)
        {
            if(g%p[i]==0)
            {
                flag=1;
                j=i+1;
                break;
            }
        }
        if(flag)
        {
            cout<<"YES\n"<<a[0]<<" "<<j<<endl;
        }
        else cout<<"NO"<<endl;

    }

    return 0;
}
