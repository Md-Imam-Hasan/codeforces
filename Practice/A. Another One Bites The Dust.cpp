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
    ///cin>>t;

    while(t--)
    {
        ll n,i,j,k,a,b,c;
        cin>>a>>b>>c;
        n=c*2;
        i=min(a,b);
        j=max(a,b);
        n+=(i*2);
        if(j-i>=1) n++;
        cout<<n<<endl;
    }

    return 0;
}

