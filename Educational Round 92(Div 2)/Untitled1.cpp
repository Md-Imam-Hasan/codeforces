#include <bits/stdc++.h>
#define ll long long
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

///Code starts from here
int main()
{
    fast_io;
    int t;
    cin>>t;

    while(t--)
    {
        ll l,r,n,i,j,k;
        cin>>l>>r;

        if(l*2>r)
        {
            cout<<"-1 -1"<<endl;
        }
        else
        {
            cout<<l<<" "<<l*2<<endl;
        }
    }

    return 0;
}
