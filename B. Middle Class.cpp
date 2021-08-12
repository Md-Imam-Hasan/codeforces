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
        double x,sum=0;;
        int n,i,j,k=0;
        cin>>n>>x;
        int a[n];

        for(i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        sort(a,a+n);
        for(i=0;i<n;i++)
        {
            if(sum/(n-i)>=x)
            {
                cout<<n-i;
                k=1;
                break;
            }
            else
            {
                sum-=a[i];
            }
        }
        if(!k) cout<<"0";
        if(t) cout<<"\n";
    }

    return 0;
}

