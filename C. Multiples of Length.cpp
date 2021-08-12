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
        ll a[n];

        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        if(n==1)
        {
            cout<<"1 1\n0"<<endl;
            cout<<"1 1\n0"<<endl;
            cout<<"1 1\n"<<endl;
            cout<<-a[0]<<endl;
        }
        else
        {
            cout<<"1 1"<<endl;
            cout<<-a[0]<<endl;
            cout<<"1 "<<n<<endl;
            cout<<"0 ";
            for(i=1;i<n;i++) cout<<-n*a[i]<<" ";
            cout<<endl;
            cout<<"2 "<<n<<endl;
            for(i=1;i<n;i++) cout<<(n-1)*a[i]<<" ";
            cout<<endl;
        }
        /*cout<<"Case "<<kase<<": "<<ans<<endl;
        kase++;*/
        if(t) cout<<"\n";
    }

    return 0;
}
