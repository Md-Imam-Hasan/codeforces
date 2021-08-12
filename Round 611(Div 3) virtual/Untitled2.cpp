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
        cin>>n>>k;
        if(n%k==0)
        {
            cout<<n<<endl;
        }
        else
        {
            j=k/2;
            x=(n/k)*k;
            if(x+j<n)
            cout<<x+j<<endl;
            else cout<<n<<endl;       }
    }

    return 0;
}
