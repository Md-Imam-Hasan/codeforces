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
        int a[3],i,j,k;

        for(i=0;i<3;i++)
            cin>>a[i];
        sort(a,a+3);

        if(a[1]!=a[2])
            cout<<"NO";
        else
        {
            cout<<"YES"<<endl;
            cout<<a[1]<<" "<<a[0]<<" "<<"1";
        }

        if(t) cout<<"\n";
    }

    return 0;
}
