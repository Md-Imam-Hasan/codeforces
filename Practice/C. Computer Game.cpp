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
        ll n,i,j,k,a,b,x,y;
        cin>>k>>n>>a>>b;

        k--;
        if(n*b<=k)
        {
            x=(k-n*b)/(a-b);
            cout<<min(x,n)<<endl;
        }
        else cout<<"-1"<<endl;
    }

    return 0;
}
