#include <bits/stdc++.h>
#define ll long long

using namespace std;

///Code starts from here
int main()
{
    int t;
    cin>>t;

    A:
    while(t--)
    {
        ll n,i,j,k,d;
        cin>>n>>k;
        ll mn=INT_MAX,mx=0;
        k--;

        while(k--)
        {
            i=n;
            mn=INT_MAX,mx=0;
            while(n>0)
            {
                d=n%10;
                n/=10;
                mn=min(mn,d);
                if(mn==0)
                {
                    cout<<i;
                    if(t) cout<<"\n";
                    goto A;
                }
                mx=max(mx,d);
            }
            i+=(mn*mx);
            n=i;
        }
        cout<<n;
        if(t) cout<<"\n";
    }

    return 0;
}
