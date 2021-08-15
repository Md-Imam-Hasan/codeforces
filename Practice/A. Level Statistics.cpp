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
        ll n,i,j,k=0,x,y,x1=0,y1=0;
        cin>>n;

        for(i=0;i<n;i++)
        {
            cin>>x>>y;
            if(x<x1||y<y1||x<y||x-x1<y-y1)
            {
                k=1;
            }
            x1=x;
            y1=y;
        }
        if(!k) cout<<"YES";
        else cout<<"NO";
        if(t) cout<<"\n";
    }

    return 0;
}

