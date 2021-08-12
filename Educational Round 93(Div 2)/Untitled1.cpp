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
        ll n,i,j,k,flg=0;
        cin>>n;
        int a[n];

        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        ll sum=a[0]+a[1];

        for(i=2;i<n;i++)
        {
            if(a[i]>=sum)
            {
                flg=1;
                k=i+1;
                break;
            }
        }
        if(flg)
        {
            cout<<"1 2 "<<k<<endl;
        }
        else cout<<"-1"<<endl;
        /*cout<<"Case "<<kase<<": "<<ans<<endl;
        kase++;
        if(t) cout<<"\n";*/
    }

    return 0;
}
