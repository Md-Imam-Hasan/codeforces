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
        cin>>n>>m>>k;
        if(min(m,k)>=n) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }

    return 0;
}
