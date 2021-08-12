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
        ll n,i,j,k,T;
        cin>>n>>T;
        ll a[n];

        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        bool ok=1;
        for(i=0;i<n;i++)
        {
            if(a[i]<=(T/2))
            {
                if(a[i]*2==T)
                {
                    if(ok)
                    {
                        cout<<"1 ";
                        ok=!ok;
                    }
                    else
                    {
                        cout<<"0 ";
                        ok=!ok;
                    }
                }
                else
                {
                    cout<<"0 ";
                }
            }
            else
            {
                cout<<"1 ";
            }
        }
        cout<<endl;
    }

    return 0;
}
