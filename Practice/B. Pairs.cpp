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
    ///cin>>t;

    while(t--)
    {
        ll n,m,a,b,x,y,i,j,k=0,flag=0;
        cin>>n>>m>>x>>y;
        ll v[2]={x,y};
        vector<pair<ll,ll>>p;

        for(i=1;i<m;i++)
        {
            cin>>a>>b;
            p.push_back(make_pair(a,b));
        }
        for(auto q:v)
        {
            k=0;
            vector<ll>vp(n+1);
            for(auto r:p)
            {
                if(r.first!=q&&r.second!=q)
                {
                    vp[r.first]++;
                    vp[r.second]++;
                    k++;
                }
            }
            if(*max_element(vp.begin(),vp.end())==k)
            {
                flag=1;
                break;
            }
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        /*cout<<"Case "<<kase<<": "<<ans<<endl;
        kase++;
        if(t) cout<<"\n";*/
    }

    return 0;
}

