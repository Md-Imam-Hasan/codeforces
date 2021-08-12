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
        ll z=0,o=0,mxz=0,mxo=0;
        bool ok=0;

        for(i=0;i<n-1;i++)
        {
            if(s[i]==s[i+1]&&s[i]=='1') z++;
            if(s[i]==s[i+1]&&s[i]=='0') o++;
        }
         cout<<max(z,o)<<endl;
    }

    return 0;
}

/* stuff you should look for
	* int overflow, array bounds
	* special cases (n=1?)
	* do smth instead of nothing and stay organized
	* WRITE STUFF DOWN
	* DON'T GET STUCK ON ONE APPROACH
*/
