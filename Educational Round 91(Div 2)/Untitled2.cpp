#include <bits/stdc++.h>
#define ll long long
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

///Code starts from here
int main()
{
    fast_io;
    int t;
    cin>>t;

    while(t--)
    {
        string s;
        cin>>s;
        int i,j,k,r=0,s1=0,p=0;

        for(i=0;i<s.length();i++)
        {
            if(s[i]=='R') r++;
            else if(s[i]=='S') s1++;
            else p++;
        }

        if(r>=s1&&r>=p)
        {
            for(i=0;i<s.length();i++) cout<<"P";
        }
        else if(s1>=r&&s1>=p)
        {
            for(i=0;i<s.length();i++) cout<<"R";
        }
        else if(p>=r&&p>=s1)
        {
            for(i=0;i<s.length();i++) cout<<"S";
        }
        if(t) cout<<"\n";
    }

    return 0;
}
