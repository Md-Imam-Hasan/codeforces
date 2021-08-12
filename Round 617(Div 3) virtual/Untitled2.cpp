#include <bits/stdc++.h>
#define ll long long
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
const double pi = 2.0*acos(0.0);

using namespace std;

///Code starts from here
int main()
{
    fast_io;
    int t,kase=1;
    cin>>t;

    while(t--)
    {
        ll n,i,j,k;
        cin>>n;
        ll sum=0;
        while(n>0)
        {
            sum+=(n/10)*10;
            k=n%10;
            j=n/10;
            if(j==0)
            {
                sum+=k;
                break;
            }
            n=j+k;
        }
        cout<<sum<<endl;
    }

    return 0;
}
