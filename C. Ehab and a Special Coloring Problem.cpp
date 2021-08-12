#include <bits/stdc++.h>
#define ll long long
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
const double pi =     2.0*acos(0.0);

using namespace std;

///Code starts from here
const int n=100005;
int prime[n+1];
void SieveOfEratosthenes()
{
    // Create a boolean array "prime[0..n]" and initialize
    // all entries it as true. A value in prime[i] will
    // finally be false if i is Not a prime, else true.

    int k=1;
    memset(prime, 0, sizeof(prime));

    for (int p=2; p<=n; p++)
    {
        // If prime[p] is not changed, then it is a prime
        if(!prime[p]){
        prime[p]=k;

            // Update all multiples of p greater than or
            // equal to the square of it
            // numbers which are multiple of p and are
            // less than p^2 are already been marked.
            for (int i=p+p; i<=n; i += p)
                prime[i] = k;
        k++;
        }
    }

}
int main()
{
    fast_io;
    int t=1,kase=1;
    ///cin>>t;

    while(t--)
    {
        ll x,i,j;
        cin>>x;
        SieveOfEratosthenes();
        for(i=2;i<=x;i++)
        {
            cout<<prime[i]<<" ";
        }
        /*cout<<"Case "<<kase<<": "<<ans<<endl;
        kase++;
        if(t) cout<<"\n";*/
    }

    return 0;
}
