#include <bits/stdc++.h>
#define ll long long
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
const double pi = 2.0*acos(0.0);

using namespace std;

///Code starts from here
int main()
{
    fast_io;
    int t=1,kase=1;

    while(t--)
    {
        ll n,i,j,k;
        cin>>n>>k;
        if(k==1||k==n) cout<<3*n<<endl;
        else cout<<3*n+min(abs(1-k),abs(n-k))<<endl;
    }

    return 0;
}

