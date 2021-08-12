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
        int n,m;
        cin>>n>>m;
        int i,j,k,p[n+m],q[n+m],ans=0;
        memset(p,0,sizeof(p));
        memset(q,0,sizeof(q));

        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                int a;
                cin>>a;
                if(a==0) p[i+j]++;
                else q[i+j]++;
            }
        }

        for(i=0,j=m+n-2;i<j;i++,j--)
        {
            ans+=min(p[i]+p[j],q[i]+q[j]);
        }
        cout<<ans;
        if(t) cout<<"\n";
    }

    return 0;
}
