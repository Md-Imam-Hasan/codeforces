#include <bits/stdc++.h>
#define ll long long
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;
ll  n,q=0,p;
///Code starts from here

bool div()
{
    for(;p*p<=n;p++)
    {
        if(n%p==0)
        {
            n/=p;
            q=p;
            p++;
            return true;
        }
    }
    return false;
}
int main()
{
    fast_io;
    int t;
    cin>>t;

    while(t--)
    {
        ll i=0,j=0,k=0;
        cin>>n;
        int a=2,b=3,c=4;

        if(n<24)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            p=2;
            bool x,y,z;
            x=div();
            if(x) i=q;
            y=div();
            if(y&&q>i) j=q;
            if(n>j) k=n;
            ///cout<<i<<" "<<j<<" "<<k<<endl;

            if(i&&j&&k)
            {
                cout<<"YES"<<endl;
                cout<<i<<" "<<j<<" "<<k<<endl;

            }
            else cout<<"NO"<<endl;
        }
    }

    return 0;
}
