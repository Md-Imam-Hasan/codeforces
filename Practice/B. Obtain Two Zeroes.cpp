#include <bits/stdc++.h>
#define ll long long
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

///Code starts from here
int main()
{
    fast_io;
    int t;
    cin>>t;

    while(t--)
    {
        ll a,b,i,j,k;
        cin>>a>>b;

        if(min(a,b)*2>=max(a,b)&&(a+b)%3==0)
            cout<<"YES";
        else cout<<"NO";
        if(t) cout<<"\n";
    }

    return 0;
}

