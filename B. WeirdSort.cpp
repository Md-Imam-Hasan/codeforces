#include <bits/stdc++.h>
#define ll long long

using namespace std;

///Code starts from here
int main()
{
    int t;
    cin>>t;

    A:
    while(t--)
    {
        int n,m,i,j,k,cnt=0;
        cin>>n>>m;
        int a[n];
        int x;
        bool b[n];
        bool p,q;
        vector<int>v;
        memset(b,0,sizeof(b));
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<m;i++)
        {
            cin>>x;
            b[x-1]=1;
        }
        while(1)
        {
            p=0;
            for(i=0;i<n-1;i++)
            {
                if(b[i]&&a[i]>a[i+1])
                {
                    swap(a[i],a[i+1]);
                    p=1;
                }
            }
            if(!p) break;
        }
        q=0;
        for(i=0;i<n-1;i++)
        {
            if(a[i]>a[i+1])
            {
                q=1;
                break;
            }
        }
        if(!q) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }

    return 0;
}

