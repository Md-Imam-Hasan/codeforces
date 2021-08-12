#include <bits/stdc++.h>
#define ll long long
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
const double pi =     2.0*acos(0.0);

using namespace std;

///Code starts from here
int main()
{
    fast_io;
    int t,kase=1;
    cin>>t;

    while(t--)
    {
        ll n,i,j,k,a,b;
        cin>>a>>b;
        if(a==b)
        {
            cout<<"0"<<endl;
        }
        else
        {
            k=abs(a-b)/10;
            if(abs(a-b)%10) k++;
            cout<<k<<endl;
        }

    }

    return 0;
}

