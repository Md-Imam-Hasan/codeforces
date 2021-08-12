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
        string a,b,c;
        cin>>a>>b>>c;
        bool ok=1;

        for(i=0;i<a.length();i++)
        {
            if(a[i]!=b[i])
            {
                if(a[i]!=c[i]&&b[i]!=c[i])
                {
                    ok=0;
                    break;
                }
            }
            else if(a[i]==b[i])
            {
                if(a[i]!=c[i])
                {
                    ok=0;
                    break;
                }
            }
        }
        if(ok) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }

    return 0;
}

