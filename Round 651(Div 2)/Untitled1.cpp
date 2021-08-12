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
        ll n,i,j,k;
        cin>>n;
        if(n%2==0)
        {
            cout<<n/2;
        }
        else
        {
            n=n-1;
            cout<<n/2;
        }
        if(t) cout<<"\n";
    }

    return 0;
}
