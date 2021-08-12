#include <bits/stdc++.h>
#define ll long long
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
const double pi =     2.0*acos(0.0);

using namespace std;

///Code starts from here
ll sumdigits(ll n)
{
    ll sum=0;
    while(n)
    {
        ll temp=n%10;
        sum+=temp;
        n/=10;
    }
    return sum;
}
int main()
{
    fast_io;
    int t=1,kase=1;


    while(t--)
    {
        ll n,i,j,k=0,ok=0;
        cin>>n;
        while(1)
        {
            k=sumdigits(n);
            if(k%4==0)
            {
                ok=1;
                break;
            }
            n++;
        }
        cout<<n<<endl;
    }

    return 0;
}

