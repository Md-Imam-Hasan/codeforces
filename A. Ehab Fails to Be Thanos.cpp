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
    ///cin>>t;

    while(t--)
    {
        ll n,i,j,k=0;
        cin>>n;
        int a[2*n];

        for(i=0;i<2*n;i++)
        {
            cin>>a[i];
        }
        for(i=1;i<2*n;i++)
        {
            if(a[i]!=a[i-1]) k=1;
        }
        sort(a,a+2*n);
        if(k)
        {
            for(auto x:a)
            {
                cout<<x<<" ";
            }
            cout<<endl;
        }
        else cout<<"-1"<<endl;
        /*cout<<"Case "<<kase<<": "<<ans<<endl;
        kase++;
        if(t) cout<<"\n";*/
    }

    return 0;
}

