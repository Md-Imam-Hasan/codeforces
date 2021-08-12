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
        ll x,y,n,i,j,k;
        cin>>x>>y>>n;
        i=n/x;
        if(n%x==y)
        {
            cout<<n<<endl;
        }
        else if(n-x*i>y)
        {
            cout<<x*i+y<<endl;
        }
        else
        {
            j=x*i-x+y;
            if(j<0)
            cout<<"0"<<endl;
            else cout<<j<<endl;
        }
        ///cout<<k<<endl;
    }

    return 0;
}
