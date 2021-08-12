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
        ll n,i,j,k=0;
        string s;
        cin>>n>>s;

        for(i=0;i<n;i++)
        {
            if(s[i]=='8'&&!k)
            {
                k++;
            }
            else if(k)
            {
                k++;
            }
        }
        if(k>=11) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        /*cout<<"Case "<<kase<<": "<<ans<<endl;
        kase++;
        if(t) cout<<"\n";*/
    }

    return 0;
}

