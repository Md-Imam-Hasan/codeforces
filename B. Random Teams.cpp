#include <bits/stdc++.h>
#define ll long long

using namespace std;

///Code starts from here
int main()
{
    ll n,m,i,j,k,x,y,z;
    cin>>n>>m;
    if(n==m)
    {
        cout<<"0 0"<<endl;
    }
    else
    {
        x=n/m;
        y=n%m;
        k=m-y;
        z=k*x*(x-1)/2+y*(x+1)*x/2;
        j=n-(m-1);
        j--;
        i=(j*(j+1))/2;
        cout<<z<<" "<<i<<endl;
    }

    return 0;
}

