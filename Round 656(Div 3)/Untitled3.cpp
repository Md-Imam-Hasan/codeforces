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
        int a[n];

        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int big=0,small=0;
        for(i=n-1;i>0;i--)
        {
            if(a[i]>a[i-1])
            {
                big=1;
                break;
            }
            else if(a[i]<a[i-1])
            {
                small=1;
                break;
            }
        }
        if(big)
        {
            for(;i>0;i--)
            {
                if(a[i]<a[i-1])
                    break;
            }
            cout<<i;
        }
        else if(small)
        {
            for(;i>0;i--)
            {
                if(a[i]>a[i-1])
                    break;
            }
            for(;i>0;i--)
            {
                if(a[i]<a[i-1])
                    break;
            }
            cout<<i;
        }
        else
        {
            cout<<"0";
        }
        if(t) cout<<"\n";
    }

    return 0;
}
