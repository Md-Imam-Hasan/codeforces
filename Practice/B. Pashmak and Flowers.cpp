#include <bits/stdc++.h>
#define ll long long

using namespace std;

///Code starts from here
int main()
{
    ll n;
    cin>>n;
    ll a[n],i,j,k,small=1,big=1;

    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);

    for(i=1;i<n;i++)
    {
        if(a[i]==a[i-1]) small++;
        else break;
    }

    for(i=n-2;i>=0;i--)
    {
        if(a[i]==a[i+1]) big++;
        else break;
    }

    if(small==n)
    {
        ll x=small-1;
        cout<<"0 ";
        cout<<(x*(x+1))/2<<endl;
    }
    else
    {
        cout<<abs(a[0]-a[n-1])<<" ";
        cout<<small*big<<endl;
    }

    return 0;
}

