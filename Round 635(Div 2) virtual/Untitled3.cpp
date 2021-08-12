#include <bits/stdc++.h>
#define ll long long
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

///Code starts from here

bool cmp(const pair<ll,char>&a,const pair<ll,char>&b)
{
    if(a.first==b.first)
    {
        return a.second<b.second;
    }
    else return a.first<b.first;
}
int main()
{
    fast_io;
    int t;
    cin>>t;

    while(t--)
    {
        ll n,i,j,k,r,g,b,x,y,p,q,r1,ans=1000000000000000000;
        cin>>r>>g>>b;
        ll a1[r],a2[g],a3[b];
        vector<pair<ll,char>>v;

        for(i=0;i<r;i++)
        {
            cin>>a1[i];
            v.push_back(make_pair(a1[i],'r'));
        }
        for(i=0;i<g;i++)
        {
            cin>>a2[i];
            v.push_back(make_pair(a2[i],'g'));
        }
        for(i=0;i<b;i++)
        {
            cin>>a3[i];
            v.push_back(make_pair(a3[i],'b'));
        }

        sort(v.begin(),v.end(),cmp);
        string s="";
        for(i=0;i<v.size();i++)
        {
            s+=v[i].second;
        }

        for(i=0;i<s.length();i++)
        {
            if(s[i]=='r')
            {
                if(r>1) r--;
                else
                {
                    x=i;
                    break;
                }
            }
            else if(s[i]=='g')
            {
                if(g>1) g--;
                else
                {
                    x=i;
                    break;
                }
            }
            else if(s[i]=='b')
            {
                if(b>1) b--;
                else
                {
                    x=i;
                    break;
                }
            }
        }
        for(i=s.length()-1;i>x;i--)
        {
            if(s[i]=='r')
            {
                if(r>1) r--;
                else
                {
                    y=i;
                    break;
                }
            }
            else if(s[i]=='g')
            {
                if(g>1) g--;
                else
                {
                    y=i;
                    break;
                }
            }
            else if(s[i]=='b')
            {
                if(b>1) b--;
                else
                {
                    y=i;
                    break;
                }
            }
        }

        for(i=x+1;i<y;i++)
        {
            ans=min(ans,((v[i].first-v[x].first)*(v[i].first-v[x].first)+(v[y].first-v[i].first)*(v[y].first-v[i].first)));
        }
        p=v[x].first;
        r1=v[y].first;
        cout<<ans+(r1-p)*(r1-p)<<endl;
        v.clear();

    }

    return 0;
}
