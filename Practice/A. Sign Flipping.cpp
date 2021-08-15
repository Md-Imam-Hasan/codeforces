#include <bits/stdc++.h>
#define ll long long
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
const double pi = 2.0*acos(0.0);

using namespace std;

///Code starts from here
int main()
{
    fast_io;
    int t,kase=1;
    cin>>t;

    while(t--)
    {
        ll n,i,j,k,ps=0,ng=0,z=0;
        cin>>n;
        ll a[n];
        bool ok=0;
        for(i=0;i<n;i++)
        {
            cin>>k;
            a[i]=abs(k);
        }
        for(i=0;i<n;i++)
        {
            if(!ok) cout<<-a[i]<<" ",ok=!ok;
            else cout<<a[i]<<" ",ok=!ok;
        }

        cout<<endl;
    }

    return 0;
}

