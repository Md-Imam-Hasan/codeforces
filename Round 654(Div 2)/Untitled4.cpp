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
        cin>>n>>k;
        int a[n][n];

        memset(a,0,sizeof(a));
        if(k%n==0) cout<<"0"<<endl;
        else cout<<"2"<<endl;

        i=0,j=0;

        while(k--)
        {
            a[i][j]=1;
            i++,j++,j%=n;
            if(i==n)
            {
                i=0,j++,j%=n;
            }
        }

        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                cout<<a[i][j];
            }
            cout<<endl;
        }
    }

    return 0;
}
