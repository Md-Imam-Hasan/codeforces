#include <bits/stdc++.h>
#define ll long long
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
const double pi =     2.0*acos(0.0);

using namespace std;

///Code starts from here
vector<ll>v;
void divisors(ll n)
{
    // Note that this loop runs till square root
    for (ll i=2; i*i<=n; i++)
    {
        if (n%i == 0)
        {
            // If divisors are equal, print only one
            if (n/i == i)
                v.push_back(i);

            else // Otherwise print both
            {
                v.push_back(i);
                v.push_back(n/i);
            }
        }
    }
}
int main()
{
    fast_io;
    int t,kase=1;
    cin>>t;

    while(t--)
    {
        ll n,i,j,k=0;
        cin>>n;
        ll a[n];

        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        ll ans=a[0]*a[n-1];
        divisors(ans);
        sort(v.begin(),v.end());


        if(v.size()==n)
        {
            for(i=0;i<n;i++)
            {
                if(a[i]!=v[i])
                {
                    k=1;
                    break;
                }
            }
            if(k) cout<<"-1"<<endl;
            else cout<<ans<<endl;
        }
        else cout<<"-1"<<endl;

        v.clear();
        /*cout<<"Case "<<kase<<": "<<ans<<endl;
        kase++;
        if(t) cout<<"\n";*/
    }

    return 0;
}

