#include <bits/stdc++.h>
#define ll long long
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
const double pi =     2.0*acos(0.0);

using namespace std;

///Code starts from here
int main()
{
    fast_io;
    int t=1,kase=1;


    while(t--)
    {
        ll n,i,j,k;
        cin>>n;
        if(n%4==1)
        {
            cout<<"0 A"<<endl;
        }
        else if(n%4==3)
        {
            cout<<"2 A"<<endl;
        }
        else if(n%4==2)
        {
            cout<<"1 B"<<endl;
        }
        else
        {
            cout<<"1 A"<<endl;
        }
    }

    return 0;
}
