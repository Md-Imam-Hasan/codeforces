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
        ll n,i,j,k,l;
        cin>>n>>k;
        ll a[n],b[k],ones=0;
        ll sum=0;

        for(i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i]*2;
        }
        sort(a,a+n);
        for(i=0;i<k;i++)
        {
            cin>>b[i];
            if(b[i]==1) ones++;
        }
        sort(b,b+k);
        if(n==k)
        {
            cout<<sum<<endl;
            goto A;
        }
        ll sum1=0;
        for(i=0,j=n-1;i<k;i++,j--)
        {
            sum1+=a[j];
            if(b[i]==1) sum1+=a[j];
        }
        ///k=k-ones;
        if(j!=n-1) j++;
        for(i=0;i<k;i++)
        {
            if(b[i]>1)
            {
                sum1+=a[j-b[i]+1];
                j-=b[i];
                j++;
            }

        }

        cout<<sum1<<endl;
    }

    return 0;
}
