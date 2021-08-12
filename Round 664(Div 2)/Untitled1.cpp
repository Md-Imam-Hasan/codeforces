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
        ll r,g,b,w;
        cin>>r>>g>>b>>w;

        if(r%2+g%2+b%2+w%2<=1) cout<<"Yes"<<endl;
        else if(r&&g&&b&&(r-1)%2+(g-1)%2+(b-1)%2+(w+3)%2<=1) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }

    return 0;
}

