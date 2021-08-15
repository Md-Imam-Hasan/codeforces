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
        ll n,i,j,k=0,x,y;
        cin>>n;
        int a[n];

        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        x=0,y=n-1;
        for(i=0;i<n;i++)
        {
            if(a[i]>=i)
                x=i;
                else break;
        }

        for(i=n-1;i>=0;i--)
        {
            if(a[i]>=n-1-i)
                y=i;
                else break;
        }

        if(x<y) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
        ///if(t) cout<<"\n";
    }

    return 0;
}

