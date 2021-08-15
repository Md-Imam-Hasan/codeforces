#include <bits/stdc++.h>
#define ll long long
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
const double pi =     2.0*acos(0.0);

using namespace std;

///Code starts from here
int main()
{
    fast_io;
    int t=1,kase=1;

    while(t--)
    {
        ll n,i,j,k,flag=0;
        cin>>n;
        string s,ans="";
        cin>>s;
        ll cnt8=0,cnt=0;
        cnt=cnt8=(n-11)/2;
        for(i=0;i<n;i++)
        {
            if(s[i]=='8')
            {
                if(cnt8) cnt8--;
                else ans+=s[i];
            }
            else
            {
                if(cnt) cnt--;
                else ans+=s[i];
            }
        }
        if(ans[0]=='8')
        {
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }

    return 0;
}
