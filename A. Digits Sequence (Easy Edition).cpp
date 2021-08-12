#include <bits/stdc++.h>
#define ll long long
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
const double pi =     2.0*acos(0.0);

using namespace std;

///Code starts from here
int main()
{
    fast_io;
    ll n,x=1,y=9,temp,base=1,ans;
    cin>>n;
    temp=y;
    while(n>temp)
    {
        n-=temp;
        x++;
        y=9*x;
        base*=10;
        temp=y*base;
        ///cout<<temp<<endl;
    }
    ///x++;
    ///cout<<base<<" "<<n<<" "<<x<<endl;
    temp=base-1+(n%x?(n/x+1):n/x);
    ///cout<<temp<<endl;
    string s=to_string(temp);
    ll i=n%x;
    if(i==0) cout<<s[s.length()-1];
    else cout<<s[i-1]<<endl;

    return 0;
}
