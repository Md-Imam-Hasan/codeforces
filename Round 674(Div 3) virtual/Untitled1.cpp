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
        ll n,i,j,k,x;
        cin>>n>>x;
        if(n<=2)
        {
            cout<<"1"<<endl;
        }
        else
        {
            n-=2;
            k=(n/x);
            if(n%x) k=k+1;
            cout<<k+1<<endl;
        }
    }

    return 0;
}
