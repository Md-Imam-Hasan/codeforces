#include <bits/stdc++.h>
#define ll long long
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

///Code starts from here

ll factor(ll n)
{
    ll cnt = 0;
    for (ll i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            // If divisors are equal,
            // count only one
            if (n / i == i)
                cnt++;

            else // Otherwise count both
                cnt = cnt + 2;
        }
    }
    return cnt;
}
ll gcd(ll a, ll b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

// Function to find gcd of array of
// numbers
ll findGCD(ll arr[], ll n)
{
    ll result = arr[0];
    for (ll i = 1; i < n; i++)
        result = gcd(arr[i], result);

    return result;
}
int main()
{
    fast_io;
    ll n,i,j,k,flag=0;
        cin>>n;
        ll a[n];

        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]==1) flag=1;
        }
        if(flag) cout<<"1"<<endl;
        else
        {
            ll value=findGCD(a,n);
            ll ans=factor(value);
            cout<<ans<<endl;
        }


    return 0;
}
