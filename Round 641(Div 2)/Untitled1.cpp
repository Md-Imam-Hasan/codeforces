#include <bits/stdc++.h>
#define ll long long

using namespace std;
bool isPrime(ll n)
{
    // Corner cases
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;

    // This is checked so that we can skip
    // middle five numbers in below loop
    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (ll i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;

    return true;
}
ll printDivisors(ll n)
{
    // Note that this loop runs till square root
    for (ll i=3; i<=sqrt(n); i++)
    {
        if (n%i == 0)
        {
            return i;
        }
    }
}
///Code starts from here
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        ll n,i,j,k;
        cin>>n>>k;

        if(n%2==0)
        {
            cout<<n+2*k;
        }
        else if(isPrime(n))
        {
            n=n*2;
            cout<<n+2*(k-1);
        }
        else
        {
            i=printDivisors(n);
            n+=i;
            cout<<n+2*(k-1);
        }

        if(t) cout<<"\n";
    }

    return 0;
}

