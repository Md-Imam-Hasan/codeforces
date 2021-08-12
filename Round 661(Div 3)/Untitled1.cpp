#include <bits/stdc++.h>
#define ll long long
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
const double pi =     2.0*acos(0.0);

using namespace std;

///Code starts from here
int main()
{
    fast_io;
    int t;
    cin>>t;

    A:
    while(t--)
    {
        int n,i,j,k=0;
        cin>>n;
        int a[n];

        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);

        if(n==1)
        {
            cout<<"YES"<<endl;
            goto A;
        }

        for(i=1;i<n;i++)
        {
            k=max(k,(a[i]-a[i-1]));
        }
        if(k>1)
        {
            cout<<"NO"<<endl;
        }
        else cout<<"YES"<<endl;
    }

    return 0;
}

