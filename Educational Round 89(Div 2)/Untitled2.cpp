#include <bits/stdc++.h>
#define ll long long

using namespace std;

///Code starts from here
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        ll n,x,m,i,j,k,l,r,mx=1;
        cin>>n>>x>>m;
        //int a[n];
        vector<pair<ll,ll>>v;

        //for(i=0;i<n;i++) cin>>a[i];

        for(i=0;i<m;i++)
        {
            cin>>l>>r;
            v.push_back(make_pair(l,r));
        }

        for(i=0;i<m;i++)
        {
            if(v[i].first<=x&&v[i].second>=x)
            {
                l=v[i].first;
                r=v[i].second;
                mx=max(mx,r-l+1);
                for(j=i+1;j<m;j++)
                {
                    if(l>v[j].second) continue;
                    else if(r<v[j].first) continue;
                    else
                    {
                        l=min(l,v[j].first);
                        r=max(r,v[j].second);
                        mx=max(mx,r-l+1);
                    }

                }
                break;
            }
            else if(i==m-2)
            {
                if(v[i+1].first<=x&&v[i+1].second>=x)
                {
                    l=v[i+1].first;
                    r=v[i+1].second;
                    mx=max(mx,r-l+1);
                }
            }
        }

        cout<<mx;
        if(t) cout<<"\n";
    }

    return 0;
}
