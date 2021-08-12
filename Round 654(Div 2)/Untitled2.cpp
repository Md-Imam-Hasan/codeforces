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
        ll n,r,i,j,k,x,y;
        cin>>n>>r;

        if(n>r)
        {
            x=(r*(r+1))/2;
            cout<<x<<endl;
        }
        else
        {
            x=(n*(n-1))/2;
            cout<<x+1<<endl;
        }

    }

    return 0;
}

