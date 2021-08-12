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

    while(t--)
    {
        int n,i,j,k;
        cin>>n;
        k=n/4;
        if(n%4>0) k++;

        for(i=1;i<=n-k;i++)
        {
            cout<<"9";
        }
        for(i=1;i<=k;i++)
        {
            cout<<"8";
        }
        cout<<endl;
    }

    return 0;
}
