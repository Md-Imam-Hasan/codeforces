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
        ll n,i,j=2,k,mn=INT_MAX;
        cin>>n;
        k=sqrt(n)+1;
        for(i=1;i<=k;i++)
        {
            if(i*i>=n)
            {
                j=i+i;
                break;
            }
            else if(i*(i+1)>=n)
            {
                j=i+i+1;
                break;
            }
        }
        cout<<j-2<<endl;
    }

    return 0;
}
