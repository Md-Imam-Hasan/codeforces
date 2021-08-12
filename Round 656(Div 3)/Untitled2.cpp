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
        ll n,i,j,k;
        cin>>n;
        int a[2*n];
        vector<int>v(n+1);

        for(i=0;i<2*n;i++)
        {
            cin>>a[i];
        }

        for(i=0;i<2*n;i++)
        {
            if(!v[a[i]])
            {
                cout<<a[i]<<" ";
                v[a[i]]=1;
            }
        }
        if(t) cout<<"\n";
    }

    return 0;
}
