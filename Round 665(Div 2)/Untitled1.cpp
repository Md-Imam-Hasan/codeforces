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
        ll n,i,j,k;
        cin>>n>>k;
        if(k==0)
        {
            if(n%2) cout<<"1"<<endl;
            else cout<<"0"<<endl;
        }
        else if(k>=n)
        {
            cout<<k-n<<endl;
        }
        else
        {
            if(k%2==n%2)
            {
                cout<<"0"<<endl;
            }
            else
            {
                cout<<"1"<<endl;
            }
        }

    }

    return 0;
}

