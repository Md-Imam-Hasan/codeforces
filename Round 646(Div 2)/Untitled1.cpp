#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,x,oddcount=0,evencount=0;
        cin>>n>>x;
        int a[n],i,j=0,k;

        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]%2==0)
            {
                evencount++;
            }
            else oddcount++;
        }
        for(i=1;i<=x;i+=2)
        {
            if(oddcount>=i&&evencount>=x-i)
            {
                cout<<"Yes";
                j=1;
                break;
            }
        }
        if(j==0) cout<<"No";

        if(t) cout<<"\n";
    }

    return 0;
}

