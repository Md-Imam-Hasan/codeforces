#include <bits/stdc++.h>
#define ll long long
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
const double pi =     2.0*acos(0.0);

using namespace std;

int main()
{
    fast_io;
    int t,kase=1;
    cin>>t;

    while(t--)
    {
        ll n,i,j,k,zeros=0,ones=0,qust=0;
        cin>>n>>k;
        string s;
        cin>>s;
        bool ok=1;
        for(i=0;i<n;i++)
        {
            if(s[i]!='?'&&s[i%k]!='?'&&s[i]!=s[i%k])
            {
                ok=0;
                break;
            }
            if(s[i]!='?')
                s[i%k]=s[i];
        }
        for(i=0;i<k;i++)
        {
            if(s[i]=='0') zeros++;
            else if(s[i]=='1') ones++;
        }
        if(ok&&ones<=k/2&&zeros<=k/2)
        {
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }

    return 0;
}
