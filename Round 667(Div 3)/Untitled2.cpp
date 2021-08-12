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

    A:
    while(t--)
    {
        ll n,i,j,k,a,b,x,y,p,q,prod=1,p1,q1;
        cin>>a>>b>>x>>y>>n;
        k=n;
        if(a==b)
        {
            if(x<y)
            {
                swap(x,y);
                swap(a,b);
            }
            p=max(y,b-n);
            n-=(b-p);
            q=max(x,a-n);
            cout<<p*q<<endl;
            goto A;
        }
        else if(a>b)
        {
            swap(a,b);
            swap(x,y);
        }
        p=max(x,a-n);
        n-=(a-p);
        q=max(y,b-n);
        p1=max(y,b-k);
        k-=(b-p1);
        q1=max(x,a-k);
        prod=min(p*q,p1*q1);
        cout<<prod<<endl;
        goto A;

    }

    return 0;
}
