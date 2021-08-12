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
        ll n,i,j,k,o=0;
        cin>>n;
        ll a[n];

        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]) o++;
        }
        bool ok=1;
        ll cnt=0;
        if(a[0]) cnt++;
        for(i=1;i<n;i++)
        {
            if(a[i])
            {
                if(ok) ok=!ok;
                else ok=!ok,cnt++;
                if(a[i+1]==1&&!ok) i++;
            }
            else if(a[i]==0)
            {
                if(!ok) ok=!ok;
            }

        }

        cout<<cnt<<endl;
    }

    return 0;
}
