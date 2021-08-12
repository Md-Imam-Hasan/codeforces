#include <bits/stdc++.h>
#define ll long long
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
const double pi =     2.0*acos(0.0);

using namespace std;

///Code starts from here
int main()
{
    fast_io;
    int t=1,kase=1;

    while(t--)
    {
        ll n,i,j,k;
        cin>>n;
        double a[n];
        ll sum=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]>=0) sum+=(floor(a[i]));
            else sum+=(ceil(a[i]));
        }
        ///cout<<sum<<endl;
        ///cout<<floor(-2.10517)<<endl;
        if(sum==0)
        {
            for(i=0;i<n;i++)
            {
                if(a[i]>=0) cout<<floor(a[i])+0<<endl;
                else cout<<ceil(a[i])+0<<endl;
            }

        }
        else if(sum>0)
        {
            for(i=0;i<n;i++)
            {
                if(sum&&a[i]<0&&floor(a[i])<ceil(a[i]))
                {
                    cout<<floor(a[i])+0<<endl;
                    sum--;
                }
                else if(a[i]>=0) cout<<floor(a[i])+0<<endl;
                else cout<<ceil(a[i])+0<<endl;
            }

        }
        else
        {
            for(i=0;i<n;i++)
            {
                if(sum<0&&a[i]>=0&&ceil(a[i])>floor(a[i]))
                {
                    cout<<ceil(a[i])+0<<endl;
                    sum++;
                }
                else if(a[i]>=0) cout<<floor(a[i])+0<<endl;
                else cout<<ceil(a[i])+0<<endl;
            }

        }
        ///cout<<ceil(-0.93878)+0<<endl;

    }

    return 0;
}
