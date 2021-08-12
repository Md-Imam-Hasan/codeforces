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
        ll n,i,j,k,x,flag=0;
        cin>>n>>x;
        int a[n];

        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]==x) flag=1;
        }
        sort(a,a+n);

        if(flag)
        {
            cout<<"1"<<endl;
        }
        else if(a[n-1]>x)
        {
            cout<<"2"<<endl;
        }
        else
        {
            k=ceil((double)x/a[n-1]);
            cout<<k<<endl;
        }
        ///if(t) cout<<"\n";
    }

    return 0;
}

