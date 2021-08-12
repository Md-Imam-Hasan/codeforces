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
        ll n,i,j,k,m;
        cin>>n>>m;
        if(m==0)
        {
            cout<<"1"<<endl;
        }
        else if(m==n)
        {
            cout<<"0"<<endl;
        }
        else
        {
            if(m<=n/2) cout<<m<<endl;
            else cout<<n-m<<endl;
        }
    }

    return 0;
}
