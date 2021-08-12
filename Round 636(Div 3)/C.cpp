
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin>>t;
    ll n,q,i,j,count;

    while(t--)
    {
        cin>>n;
        ll a[n];
        ll sum=0;

        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        q=a[0];
        for(i=1;i<n;i++)
        {
            if(q>0)
            {
                if(a[i]>=q)
                {
                    q=a[i];
                }
                else if(a[i]<q&&a[i]<0)
                {
                    sum+=q;
                    q=a[i];
                }
            }
            else
            {
                if(a[i]>=q&&a[i]<0)
                {
                    q=a[i];
                }
                else if(a[i]>q&&a[i]>0)
                {
                    sum+=q;
                    q=a[i];
                }
            }
        }
        sum+=q;
        cout<<sum;

        if(t) cout<<endl;


    }

    return 0;
}


