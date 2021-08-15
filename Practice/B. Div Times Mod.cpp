#include <bits/stdc++.h>
#define ll long long
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
const double pi = 2.0*acos(0.0);

using namespace std;

///Code starts from here
vector<ll>v;
ll k;
void divisors(ll n)
{
    // Note that this loop runs till square root
    ll l=sqrt(n)+1;
    for (ll i=1; i<=l; i++)
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
        if(i>=k) break;
    }
    sort(v.begin(),v.end());
}
int main()
{
    fast_io;
    int t=1,kase=1;

    while(t--)
    {
        ll n,i,j,mn=INT_MAX,x,a;
        cin>>n>>k;
        divisors(n);

        for(i=0;i<v.size();i++)
        {
            if(v[i]<k)
            {
                a=(n/v[i]);
                x=(a*k+v[i]);
                mn=min(mn,x);
            }
            else break;
        }
        cout<<mn<<endl;

    }

    return 0;
}
