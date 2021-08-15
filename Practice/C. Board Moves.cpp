#include <bits/stdc++.h>
#define ll long long

using namespace std;

///Code starts from here
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        ll n,i,j,k,cnt=0;
        cin>>n;

        if(n==1) cout<<cnt;
        else
        {
            for(i=3;i<=n;i+=2)
            {
                j=(i-1)*4;
                k=(i/2)*j;
                cnt+=k;
            }

            cout<<cnt;
        }
        if(t) cout<<"\n";
    }

    return 0;
}

