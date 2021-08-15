#include <bits/stdc++.h>
#define ll long long
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
const double pi = 2.0*acos(0.0);

using namespace std;

///Code starts from here
int main()
{
    fast_io;
    int t=1,kase=1;

    while(t--)
    {
        ll n,i,j,k,ps=0,ng=0,z=0;
        cin>>n;
        ll a[n];
        bool ok=0;

        for(i=0;i<n;i++)
        {
            if(n%2==0) ok=!ok;
            for(j=0;j<n;j++)
            {
                if(!ok) cout<<"W",ok=!ok;
                else cout<<"B",ok=!ok;
            }
            cout<<endl;
        }

        cout<<endl;
    }

    return 0;
}

