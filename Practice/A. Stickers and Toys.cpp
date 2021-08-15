#include <bits/stdc++.h>
#define ll long long
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
const double pi =     2.0*acos(0.0);

using namespace std;

///Code starts from here
int main()
{
    fast_io;
    int T,kase=1;
    cin>>T;

    while(T--)
    {
        ll n,i,j,k,s,t,x;
        cin>>n>>s>>t;
        x=n;
        if(s+t==n)
        {
            cout<<max(s,t)+1<<endl;
        }
        else if(s+t<2*n)
        {
            j=max(s,t);
            k=min(s,t);

            cout<<n-k+1<<endl;
        }
        else cout<<"1"<<endl;
    }

    return 0;
}

