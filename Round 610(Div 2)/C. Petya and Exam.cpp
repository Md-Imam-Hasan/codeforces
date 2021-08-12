#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll m;
    cin>>m;
    ll n,T,a,b;

    while(m--)
    {
        cin>>n>>T>>a>>b;
        vector<pair<ll,ll>>v;
        ll i,s[n],t[n],ans=0,easy=0,hard=0,easycount=0,hardcount=0,x,y,l,p,q;

        for(i=0;i<n;i++)
        {
            cin>>s[i];
            if(s[i]) hard++;
            else easy++;
        }
        for(i=0;i<n;i++)
        {
            cin>>t[i];
        }

        for(i=0;i<n;i++)
        {
            v.push_back(make_pair(t[i],s[i]));
        }
        v.push_back(make_pair(T+1,0));
        sort(v.begin(),v.end());

        for(i=0;i<=n;i++)
        {
            x=easycount*a+hardcount*b;
            y=v[i].first-x-1;
            if(y>=0)
            {
                p=min((easy-easycount),y/a);
                y-=p*a;
                q=min((hard-hardcount),y/b);
                ans=max(ans,easycount+hardcount+p+q);
            }
            l=i;
            while(l<v.size()&&v[l].first==v[i].first)
            {
                if(v[l].second)
                    hardcount++;
                else easycount++;

                l++;
            }
            i=l-1;
        }

        cout<<ans<<endl;
    }

    return 0;
}
