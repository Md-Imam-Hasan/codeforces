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
        int n,i,j,k=0,x;
        cin>>n;
        int a[n];

        cin>>a[0];
        x=a[0];

        for(i=1;i<n;i++)
        {
            cin>>a[i];
            if(x>a[i])
            {
                k=max(k,x-a[i]);
            }
            x=max(x,a[i]);
        }

        cout<<ceil(log2(k+1));
        if(t) cout<<"\n";
    }

    return 0;
}

