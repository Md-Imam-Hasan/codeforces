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
        ll n,i,j,k;
        cin>>n;
        ll a[n];

        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        vector<ll>v1,v2;
        v1.push_back(a[0]);

        for(i=1;i<n;i++)
        {
            if(a[i]>a[i-1])
            {
                v1.push_back(a[i]);
            }
            else v2.push_back(a[i]);
        }
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end(),greater<ll>());
        bool ok=1;
        for(i=1;i<v2.size();i++)
        {
            if(v2[i]==v2[i-1])
            {
                ok=0;
                break;
            }
        }
        if(ok)
        {
            cout<<"YES"<<endl;
            cout<<v1.size()<<endl;
            for(auto x:v1) cout<<x<<" ";
            cout<<endl;
            cout<<v2.size()<<endl;
            for(auto x:v2) cout<<x<<" ";
            cout<<endl;
        }
        else cout<<"NO"<<endl;
    }

    return 0;
}

