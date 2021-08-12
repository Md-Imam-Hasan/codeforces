#include <bits/stdc++.h>
#define ll long long
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;
int c[1100];


///Code starts from here
int main()
{
    fast_io;
    int t;
    cin>>t;

    while(t--)
    {
        int n,m,i,j,k=0,x;
        cin>>n>>m;
        int a[n],b[m];


        for(i=0;i<n;i++)
        {
            cin>>a[i];
            c[a[i]]=1;
        }

        for(i=0;i<m;i++)
        {
            cin>>x;
            cout<<x<<endl;
            cout<<"value "<<c[x]<<endl;
            if(c[x]&&!k)
            {
                k=1;
                j=x;
            }
        }
        if(k)
        {
            cout<<"YES"<<endl;
            cout<<k<<" "<<j;
        }
        else cout<<"NO";


        if(t) cout<<"\n";
    }

    return 0;
}
