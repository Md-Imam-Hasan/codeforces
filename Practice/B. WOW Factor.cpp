#include <bits/stdc++.h>
#define ll long long
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

///Code starts from here
int main()
{
    fast_io;
    string s,t="";
    cin>>s;
    ll i,j,k,l=0,r=0,v=0,w=0,ans=0;

    for(i=0;i<s.length();i++)
    {
        v=0;
        if(s[i]=='o')
        {
            t+=s[i];
        }
        else if(s[i]=='v')
        {
            v++;
            i++;
            for(;i<s.length();i++)
            {
                if(s[i]=='v')
                    v++;
                else break;
            }

            for(j=1;j<v;j++)
            {
                t+='w';
                w++;
            }
            v=0;
            i--;
        }
    }
    ///cout<<t<<endl;
    ///cout<<w<<endl;

    for(i=0;i<t.length();i++)
    {
        l+=(t[i]=='w');
        if(t[i]=='o')
        {
            ans+=(l*(w-l));
        }
    }
    cout<<ans<<endl;

    return 0;
}

