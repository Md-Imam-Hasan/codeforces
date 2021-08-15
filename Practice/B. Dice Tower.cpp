#include <bits/stdc++.h>
#define ll long long

using namespace std;

///Code starts from here
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        ll n;
        cin>>n;
        ll k=n%14;
        if(k>0&&k<7&&n>14) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}

