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
        ll n,i,j,k;
        cin>>n;
        int a[n];

        for(i=0;i<n;i++) cin>>a[i];

        sort(a,a+n);
        //n--;

        if(n%2==0)
        {
            for(i=n/2;i>0;i--)
            {
                cout<<a[i-1]<<" "<<a[n-i]<<" ";
            }
        }
        else
        {
            cout<<a[n/2]<<" ";
            for(i=(n/2);i>0;i--)
            {
                cout<<a[i-1]<<" "<<a[n-i]<<" ";
            }
        }
        if(t) cout<<"\n";
    }

    return 0;
}
