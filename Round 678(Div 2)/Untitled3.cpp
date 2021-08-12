#include <bits/stdc++.h>
#define ll long long
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
const double pi = 2.0*acos(0.0);

using namespace std;
const ll m=1e9+7;
///Code starts from here
ll fact(ll n)
{
    if (n <= 1)
        return 1;
    return ((n*fact(n-1))%m);
}

ll nPr(ll n, ll r)
{
    ll prod=1;
    for(ll i=0;i<r;i++)
    {
        prod*=(n-i);
        prod%=m;
    }
    return prod;
}
int main()
{
    fast_io;
    int t=1,kase=1;

    while(t--)
    {
        ll n,i,j,k,x,pos,a=0,b=0,c,p,q;
        cin>>n>>x>>pos;
        ll prod=1;
        int l=0,r=n;
        while (l<r)
        {
            int mid=(l+r)/2;
            if (pos<=mid-1)
            {
                r=mid;
                ++b;
            }
            else
            {
                l=mid+1;
                if (mid!=pos) ++a;
            }
        }
        //cout<<a<<" "<<b<<endl;
        c=a+b;
        p=x-1;
        q=n-x;
        for(i=p;i>p-a;i--)
        {
            prod*=i;
            prod%=m;
        }
        for(i=q;i>q-b;i--)
        {
            prod*=i;
            prod%=m;
        }
        for(i=1;i<=n-c-1;i++)
        {
            prod*=i;
            prod%=m;
        }
        cout<<prod<<endl;
    }

    return 0;
}

/* stuff you should look for
	* int overflow, array bounds
	* special cases (n=1?)
	* do smth instead of nothing and stay organized
	* WRITE STUFF DOWN
	* DON'T GET STUCK ON ONE APPROACH
*/
