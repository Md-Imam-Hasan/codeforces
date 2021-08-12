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
        ll n,i,j,k,m;
        cin>>n>>m;
        ll total=n*(n+1)/2;
        k=(n-m)/(m+1);
        cout<<total-((k*(k+1))/2)*(m+1)-((k+1)*((n-m)%(m+1)))<<endl;

    }

    return 0;
}
