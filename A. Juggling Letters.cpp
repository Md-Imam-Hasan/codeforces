#include <bits/stdc++.h>
#define ll long long
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
const double pi =     2.0*acos(0.0);

using namespace std;

///Code starts from here
int main()
{
    fast_io;
    int t,kase=1;
    cin>>t;

    while(t--)
    {
        ll n,i,j,k;
        cin>>n;
        ll a[26];
        memset(a,0,sizeof(a));

        for(i=0;i<n;i++)
        {
            string s;
            cin>>s;
            for(j=0;j<s.length();j++)
            {
                a[s[j]-'a']++;
            }
        }
        bool ok=0;
        for(i=0;i<26;i++)
        {
            if(a[i])
            {
                if(a[i]%n)
                {
                    ok=1;
                    break;
                }
            }
        }
        if(ok) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;

    }

    return 0;
}

