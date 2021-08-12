#include <bits/stdc++.h>
#define ll long long
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
const double pi =     2.0*acos(0.0);

using namespace std;

///Code starts from here
ll gcd(ll a, ll b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
int main()
{
    fast_io;
    int t,kase=1;
    cin>>t;

    while(t--)
    {
        ll n,i,j,k=0,x,mx=INT_MIN,g=1,mxg=1;
        cin>>n;
        ll a[n],b[n];

        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(k<a[i])
            {
                j=i;
                k=a[i];
            }
        }
        b[0]=k;
        a[j]=0;
        g=b[0];
        for(j=1;j<n;j++)
        {
            mxg=1;
            for(i=0;i<n;i++)
            {
                if(a[i])
                {
                    if(mxg<=gcd(g,a[i]))
                    {
                        mxg=gcd(g,a[i]);
                        ///cout<<"mxg "<<mxg<<endl;
                        k=a[i];
                        x=i;
                        ///cout<<"x "<<x<<endl;
                    }
                }
            }
            ///cout<<"k "<<k<<endl;
            g=mxg;
            a[x]=0;
            b[j]=k;
        }

        for(i=0;i<n;i++) cout<<b[i]<<" ";
        cout<<endl;

    }

    return 0;
}
