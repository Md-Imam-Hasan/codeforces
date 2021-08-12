#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int n,p,k;

    while(t--)
    {
        cin>>n>>p>>k;
        int a[n],i,count=0,flag=0;

        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }

        sort(a,a+n);

        int sum[n+1];
        sum[0]=0;

        for(i=1;i<=k;i++)
        {
            sum[i]=sum[i-1]+a[i-1];
            if(sum[i]<=p)
                count=i;
        }

        for(i=k;i<=n;i++)
        {
            sum[i]=sum[i-k]+a[i-1];
            if(sum[i]<=p)
                count=i;
        }

        cout<<count<<endl;
    }
    return 0;
}
