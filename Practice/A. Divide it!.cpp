#include <bits/stdc++.h>
#define ll long long
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
const double pi =     2.0*acos(0.0);

using namespace std;

///Code starts from here
int main()
{
    fast_io;
    int t,kase=1;
    cin>>t;

    while(t--)
    {
        ll n,i,j,k=0,flag=0;
        cin>>n;
        while(n>1)
        {
            if(n%2==0)
            {
                n/=2;
                k++;
            }
            else if(n%3==0)
            {
                n*=2;
                n/=3;
                k++;
            }
            else if(n%5==0)
            {
                n*=4;
                n/=5;
                k++;
            }
            else
            {
                flag=1;
                break;
            }
        }
        if(flag) cout<<"-1"<<endl;
        else cout<<k<<endl;
    }

    return 0;
}


