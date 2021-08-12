#include <bits/stdc++.h>
#define ll long long
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

///Code starts from here
int main()
{
    fast_io;
    int t;
    cin>>t;

    while(t--)
    {
        ll n,i,j,k=1;
        cin>>n;

        for(i=1;i<=n;i++)
        {
            if(i%2==0)
            {
                cout<<k<<" ";
                k+=2;
            }
            else
            {
                cout<<k<<" ";
            }
        }
        if(t) cout<<"\n";
    }

    return 0;
}

