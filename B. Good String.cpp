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
        cin>>n;
        string s;
        cin>>s;
        ll cnt=0;
        for(i=0;i<n;i++)
        {
            if(s[i]=='>') break;
            else cnt++;
        }
        ll ans=cnt;
        cnt=0;
        for(i=n-1;i>=0;i--)
        {
            if(s[i]=='<') break;
            else cnt++;
        }
        ans=min(ans,cnt);
        cout<<ans<<endl;
    }

    return 0;
}

