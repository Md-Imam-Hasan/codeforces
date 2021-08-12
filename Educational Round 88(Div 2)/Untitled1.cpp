#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,m,k;
        cin>>n>>m>>k;
        int i,j,x,y;

        i=n/k;
        if(i>=m||m==0) cout<<m;
        else if(i<m)
        {
            x=i;
            y=(m-x)/(k-1);
            j=y*(k-1);
            if(j==(m-x))
            cout<<x-y;
            else cout<<x-y-1;
        }

        if(t) cout<<"\n";
    }

    return 0;
}

