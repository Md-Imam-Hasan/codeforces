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
        ll n,i,j,k,x;
        cin>>n>>x;
        ll a[n],b[n];

        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        for(i=0;i<n;i++)
        {
            cin>>b[i];
        }
        sort(b,b+n);
        bool ok=1;

        for(i=0;i<n;i++)
        {
            if(a[i]+b[n-1-i]>x)
            {
                ok=0;
            }
        }

        if(ok) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
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
