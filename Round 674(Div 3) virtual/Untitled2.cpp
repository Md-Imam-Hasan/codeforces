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
        ll n,i,j,k,m,a,b,c,d;
        cin>>n>>m;
        vector<ll>v[n];
        bool ok=0;

        for(i=0;i<n;i++)
        {
            cin>>a>>b>>c>>d;
            v[i].push_back(a);
            v[i].push_back(b);
            v[i].push_back(c);
            v[i].push_back(d);
            if(b==c) ok=1;
        }
        if(m%2)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            if(ok) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }

    return 0;
}
