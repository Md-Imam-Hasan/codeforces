#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int n,k,i,j,x,y;

    while(t--)
    {
        cin>>n>>k;
        int a[n];
        vector<int>cnt(2*k+1);
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<n/2;i++)
        {
            cnt[a[i]+a[n-i-1]]++;
        }
        vector<int>pre(2*k+2);
        for(i=0;i<n/2;i++)
        {
            x=min(a[i],a[n-i-1])+1;
            y=max(a[i],a[n-i-1])+k;
            pre[x]++;
            pre[y+1]--;
        }
        for(i=1;i<(2*k+2);i++)
        {
            pre[i]+=pre[i-1];
        }
        int mn=INT_MAX;
        for(i=2;i<=2*k;i++)
        {
            mn=min(mn,((pre[i]-cnt[i])+(n/2-pre[i])*2));
        }
        cout<<mn<<endl;
    }
}
