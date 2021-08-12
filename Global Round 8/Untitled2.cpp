#include <bits/stdc++.h>
#define ll long long

using namespace std;
///100000000000000
///Code starts from here
ll Login(ll n,ll i)
{
    return (n > 1) ? 1 + Login(n / i,i) : 0;
}

ll pw(ll y,ll i)
{
    ll x=1;
    for(ll j=1;j<=i;j++)
    {
        x*=y;
    }
    return x;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll k,x=1,i=2,p,n;
    cin>>k;
    vector<ll>v(10,1);
    string s="codeforces";
    if(k==1) cout<<"codeforces"<<endl;
    else
    {
        i=0;
        n=1;

        while(n<k)
        {
            n/=v[i];
            v[i]++;
            n*=v[i];
            i=(i+1)%10;
        }

        for(i=0;i<10;i++)
        {
            while(v[i]--) cout<<s[i];
        }
        cout<<endl;
    }


    return 0;
}
