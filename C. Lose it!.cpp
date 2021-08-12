#include <bits/stdc++.h>
#define ll long long
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
const double pi =     2.0*acos(0.0);

using namespace std;

///Code starts from here
int main()
{
    fast_io;
    ll n,i;
    cin>>n;
    ll x;
    ll a4=0,a8=0,a15=0,a16=0,a23=0,a42=0;
    for(i=0;i<n;i++)
    {
        cin>>x;
        if(x==4) a4++;
        else if(x==8&&a4>a8) a8++;
        else if(x==15&&a8>a15) a15++;
        else if(x==16&&a15>a16) a16++;
        else if(x==23&&a16>a23) a23++;
        else if(x==42&&a23>a42) a42++;
    }
    cout<<n-a42*6<<endl;

    return 0;
}




