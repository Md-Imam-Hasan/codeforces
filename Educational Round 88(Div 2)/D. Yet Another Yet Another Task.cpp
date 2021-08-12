#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n],i,j,sum=0,ans=0;

    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(i=30;i>=1;i--)
    {
        sum=0;
        for(j=0;j<n;j++)
        {
            if(a[j]>i)
            {
                sum=0;
            }
            else
            {
                sum+=a[j];
                sum=max(sum,0);
                ans=max(sum-i,ans);
            }
        }
    }
    cout<<ans<<endl;

    return 0;
}

