#include <bits/stdc++.h>
#define ll long long

using namespace std;

///Code starts from here
ll Log2n(ll n)
{
    return (n > 1) ? 1 + Log2n(n / 2) : 0;
}
ll n;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
         ll i,j,k,ans=0,cnt=0;
        cin>>n;
        while(n>0)
        {
            cnt=Log2n(n);
            //cout<<(ll)log2(n)<<endl;
            n=n-(ll)(pow(2LL,cnt)+0.5);
            cnt++;
            ans+=((ll)(pow(2LL,cnt)+0.5)-1);
        }
        cout<<ans;

        if(t) cout<<"\n";
    }

    return 0;
}
