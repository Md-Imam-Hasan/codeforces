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
        ll n,i,j,k;
        cin>>n;
        ll a[n],b[n],c[n],p[n];

        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<n;i++)
        {
            cin>>b[i];
        }
        for(i=0;i<n;i++)
        {
            cin>>c[i];
        }
        p[0]=a[0];
        for(i=1;i<n;i++)
        {
            if(p[i-1]==a[i])
            {
                p[i]=b[i];
            }
            else p[i]=a[i];
        }
        if(p[0]==p[n-1])
        {
            p[n-1]=c[n-1];
            if(p[n-1]==p[n-2])
                p[n-1]=b[n-1];
        }
        for(i=0;i<n;i++)
        {
            cout<<p[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}

