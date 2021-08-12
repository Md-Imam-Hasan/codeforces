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
        ll n,i,j,k,mx=INT_MIN,mxb=INT_MIN;
        cin>>n>>k;
        ll a[n],b[n],c[n];

        for(i=0;i<n;i++)
        {
            cin>>a[i];
            mx=max(a[i],mx);
        }
        for(i=0;i<n;i++)
        {
            b[i]=(mx-a[i]);
            mxb=max(mxb,b[i]);
        }
        for(i=0;i<n;i++)
        {
            c[i]=(mxb-b[i]);
        }
        if(k%2)
        {
            for(auto x:b)
            {
                cout<<x<<" ";
            }
            cout<<endl;
        }
        else
        {
            for(auto x:c)
            {
                cout<<x<<" ";
            }
            cout<<endl;
        }
        /*cout<<"Case "<<kase<<": "<<ans<<endl;
        kase++;
        if(t) cout<<"\n";*/
    }

    return 0;
}
