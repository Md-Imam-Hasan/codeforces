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
        ll n,i,j,k,d,ans=0;
        ll a[3];

        for(i=0;i<3;i++)
        {
            cin>>a[i];
        }
        cin>>d;
        sort(a,a+3);

        if(d>=(a[1]-a[0])) ans+=(d-(a[1]-a[0]));
        if(d>=(a[2]-a[1])) ans+=(d-(a[2]-a[1]));
        cout<<ans<<endl;
        /*cout<<"Case "<<kase<<": "<<ans<<endl;
        kase++;
        if(t) cout<<"\n";*/
    }

    return 0;
}
