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
        ll i,j,k;
        string s;
        cin>>s;
        k=s[0]-'0';
        k=k-1;
        ll ans=k*10;
        j=(s.length());
        ans+=(j*(j+1)/2);

        cout<<ans<<endl;
    }

    return 0;
}

