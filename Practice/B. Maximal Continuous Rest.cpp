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
        ll n,i,j,k,mx=0,cnt=0;
        cin>>n;
        vector<ll>v;

        for(i=0;i<n;i++)
        {
            cin>>k;
            v.push_back(k);
        }
        for(i=0;i<n-1;i++)
        {
            v.push_back(v[i]);
        }
        bool ok=0;
        for(i=0;i<v.size();i++)
        {
            if(v[i]&&!ok)
            {
                ok=!ok;
                cnt++;
            }
            else if(v[i]&&ok)
            {
                cnt++;
            }
            if(v[i]==0&&ok)
            {
                ok=!ok;
                mx=max(mx,cnt);
                cnt=0;
            }

        }
        cout<<mx<<endl;
    }

    return 0;
}
