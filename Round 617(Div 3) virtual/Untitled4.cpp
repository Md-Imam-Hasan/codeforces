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
        ll n,i,j,k,a,b,ans=0,x;
        cin>>n>>a>>b>>k;
        vector<ll>v;

        for(i=0;i<n;i++)
        {
            cin>>x;
            if(x%(a+b)<=a&&x%(a+b)) ans++;
            else if(x%(a+b)>a&&x%(a+b)) v.push_back(x%(a+b)-a);
            else if(x%(a+b)==0) v.push_back(b);
        }
        sort(v.begin(),v.end());

        for(i=0;i<v.size();i++)
        {
            if(k>0)
            {
                if(v[i]%a&&k>(v[i]/a))
                {
                    k-=(v[i]/a);
                    k--;
                    ans++;
                }
                else if(v[i]%a==0&&k>=(v[i]/a))
                {
                    k-=(v[i]/a);
                    ans++;
                }
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}

