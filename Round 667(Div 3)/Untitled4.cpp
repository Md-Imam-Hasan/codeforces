#include <bits/stdc++.h>
#define ll long long
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
const double pi =     2.0*acos(0.0);

using namespace std;

///Code starts from here
ll sumdigits(ll n)
{
    ll sum=0;
    while(n>0)
    {
        sum+=(n%10);
        n/=10;
    }
    return sum;
}
int main()
{
    fast_io;
    int t,kase=1;
    cin>>t;

    while(t--)
    {
        ll n,i,j,k,s,cnt=0,p=10,temp;
        cin>>n>>s;
        j=n;
        while(1)
        {
            k=sumdigits(n);
            if(k<=s)
            {

                break;
            }
            temp=n%p;
            n-=temp;
            n+=p;
            p*=10;
        }
        cout<<n-j<<endl;

    }

    return 0;
}
