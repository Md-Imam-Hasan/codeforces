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
        cin>>n>>k;
        ll n1,n2,n3,n4;

        n1=n/(1+k+k*k+k*k*k);
        n2=k*n1;
        n3=k*n2;
        n4=k*n3;

        cout<<n1<<" "<<n2<<" "<<n3<<" "<<n4;
        if(t) cout<<"\n";
    }

    return 0;
}

