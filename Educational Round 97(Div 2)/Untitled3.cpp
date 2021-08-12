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
        ll a[n],t[n],b[n];
        memset(t,0,sizeof(t));
        memset(b,0,sizeof(b));

        for(i=0;i<n;i++)
        {
            cin>>a[i];
            t[a[i]]++;
            b[a[i]]=1;
        }
        ll sum=0;

        for(i=0;i<n;i++)
        {
            if(t[i]>1)
            {
                for(j=1;j<t[i];j++)
                {

                }
            }
        }
        cout<<sum<<endl;
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
