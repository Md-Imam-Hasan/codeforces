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
        ll n,i,j,k,x,y;
        cin>>n;
        string a,b;
        cin>>a>>b;
        stack<ll>st[27];
        stack<ll>stb;
        vector<pair<ll,ll>>v;

        for(i=0;i<n;i++)
        {
            if(b[i]=='?')
            {
                stb.push(i+1);
            }
        }

        for(i=0;i<n;i++)
        {
            if(isalpha(a[i]))
            {
                k=a[i]-'a';
                st[k].push(i+1);
            }
            else
            {
                st[26].push(i+1);
            }
        }

        for(i=0;i<n;i++)
        {
            if(isalpha(b[i]))
            {
                k=b[i]-'a';
                if(st[k].size()>0)
                {
                    x=st[k].top();
                    v.push_back(make_pair(x,i+1));
                    st[k].pop();
                    b[i]='0';
                    a[x-1]='0';
                }
                else if(st[26].size()>0)
                {
                    x=st[26].top();
                    v.push_back(make_pair(x,i+1));
                    st[26].pop();
                    b[i]='0';
                    a[x-1]='0';
                }
            }
        }

        for(i=0;i<n;i++)
        {
            if(a[i]!='0')
            {
                if(stb.size()>0)
                {
                    x=stb.top();
                    v.push_back(make_pair(i+1,x));
                    stb.pop();

                }
            }
        }
        cout<<v.size()<<endl;
        for(i=0;i<v.size();i++)
        {
            cout<<v[i].first<<" "<<v[i].second<<endl;
        }
    }

    return 0;
}
