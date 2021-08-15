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
        ll n,i,j,k=0,f,x,y;
        cin>>n;
        string s,pin,p[n];
        map<string,int>mp;
        map<string,int>::iterator it;
        bool ok=1;

        for(i=0;i<n;i++)
        {
            cin>>s;
            mp[s]++;
            p[i]=s;
        }

        for(it=mp.begin();it!=mp.end();it++)
        {
            k+=((it->second)-1);
        }
        cout<<k<<endl;
        for(i=0;i<n;i++)
        {
            if(mp[p[i]]==1)
            {
                cout<<p[i]<<endl;
            }
            else
            {
                ok=1;
                s=p[i];
                for(j=0;j<4;i++)
                {
                    x=s[j]-'0';
                    pin=s;
                    for(f=0;f<10;f++)
                    {
                        x++;
                        x%=10;
                        pin[j]=x+'0';
                        if(mp[pin]==0)
                        {
                            cout<<pin<<endl;
                            mp[pin]=1;
                            ok=0;
                            break;
                        }
                    }
                    if(!ok) break;
                }
                mp[p[i]]--;
            }
        }
    }

    return 0;
}

