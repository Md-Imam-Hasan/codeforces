#include <bits/stdc++.h>
#define ll long long
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
const double pi =     2.0*acos(0.0);

using namespace std;

///Code starts from here
int main()
{
    fast_io;
    int t;
    cin>>t;

    while(t--)
    {
        int n,m,ans;
        cin>>n>>m;

        if(n==1)
        {
            ans=0;
        }
        else if(n==2)
        {
            ans=m;
        }
        else
        {
            ans=m*2;
        }
        cout<<ans<<endl;
    }

    return 0;
}

