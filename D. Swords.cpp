#include <bits/stdc++.h>
#define ll long long
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

///Code starts from here

ll gcd(ll a, ll b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

// Function to find gcd of array of
// numbers
ll findGCD(vector<ll> arr, ll n)
{
    ll result = arr[0];
    for (ll i = 1; i < n; i++)
        result = gcd(arr[i], result);

    return result;
}
int main()
{
    fast_io;
     ll n,i,j,k;
        cin>>n;
        ll a[n];

        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }

        sort(a,a+n);

        vector<ll>v;
        k=a[n-1];
        for(i=0;i<n-1;i++)
        {
            if(k-a[i]>0)
                v.push_back(k-a[i]);
        }
        ll val=findGCD(v,v.size());

        ll cnt=0;

        for(i=0;i<v.size();i++)
        {
            cnt+=(v[i]/val);
        }

        cout<<cnt<<" "<<val<<endl;

    return 0;
}

