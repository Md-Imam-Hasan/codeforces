#include <bits/stdc++.h>
#define ll long long
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
const double pi =     2.0*acos(0.0);

using namespace std;

///Code starts from here
ll a1[26],a2[26][26];
int main()
{
    fast_io;
    int t=1,kase=1;

    while(t--)
    {
        ll n,i,j,k;
        string s;
        cin>>s;
        ll c;

        for(i=0;i<s.length();i++)
        {
            c=s[i]-'a';
            for(j=0;j<26;j++)
            {
                a2[j][c]+=a1[j];
            }
            a1[c]++;
        }
        ll ans=INT_MIN;
        for(i=0;i<26;i++)
        {
            ans=max(ans,a1[i]);
        }
        for(i=0;i<26;i++)
        {
            for(j=0;j<26;j++)
            {
                ans=max(ans,a2[i][j]);
            }
        }
        cout<<ans<<endl;

    }

    return 0;
}

