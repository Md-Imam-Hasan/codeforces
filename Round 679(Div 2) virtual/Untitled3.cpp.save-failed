#include <bits/stdc++.h>
#define ll long long
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
const double pi = 2.0*acos(0.0);

using namespace std;

///Code starts from here
int main()
{
    fast_io;
    int t=1,kase=1;

    while(t--)
    {
        ll n,i,j,k,x,y,mx=INT_MAX;
        k=6;
        ll a[k];
        map<ll,ll>mp;
        map<ll,ll>::iterator it,it1,it2;

        for(i=0;i<k;i++)
        {
            cin>>a[i];
        }
        sort(a,a+k);
        cin>>n;
        int b[n];
        for(i=0;i<n;i++)
        {
            cin>>b[i];
        }
        sort(b,b+n);
        /*for(i=0;i<n;i++)
        {
            for(j=0;j<k;j++)
            {
                x=b[i]-a[j];
                mp[x]++;
            }
        }
        bool ok=1;
        for(it=mp.begin();it!=mp.end();it++)
        {
            if(it->second==n)
            {
                cout<<"0"<<endl;
                ok=0;
                break;
            }
        }
        if(ok)
        {*/

            for(j=0;j<k;j++)
            {
                y=b[0]-a[j];
                for(i=0;i<k;i++)
                {
                    x=b[n-1]-a[i];
                    mx=min(mx,abs(x-y));
                }

            }
            cout<<mx<<endl;

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
