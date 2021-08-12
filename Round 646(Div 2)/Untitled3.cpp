#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,x,i,j,k,u,v;
        cin>>n>>x;
        int deg[n+1];
        memset(deg,0,sizeof(deg));

        for(i=1;i<n;i++)
        {
            cin>>u>>v;
            deg[u]++;
            deg[v]++;
        }

        if(deg[x]<=1)
        {
            cout<<"Ayush";
        }
        else
        {
            if(n%2==0)
            {
                cout<<"Ayush";
            }
            else cout<<"Ashish";
        }

        if(t) cout<<"\n";
    }

    return 0;
}

