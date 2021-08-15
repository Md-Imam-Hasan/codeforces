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
        int a[2*n];

        for(i=0;i<2*n;i++)
        {
            cin>>a[i];
        }

        sort(a,a+2*n);


        cout<<a[n]-a[n-1];
        if(t) cout<<"\n";
    }

    return 0;
}

