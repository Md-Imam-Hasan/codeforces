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
        ll n,i,j,k;
        string s;
        cin>>s;
        sort(s.begin(),s.end());
        bool ok=1;
        for(i=0;i<s.length()-1;i++)
        {
            if(s[i]==s[i+1])
            {
                ok=0;
                break;
            }
            else if(abs(s[i]-s[i+1])>1)
            {
                ok=0;
                break;
            }
        }
        if(ok) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}

