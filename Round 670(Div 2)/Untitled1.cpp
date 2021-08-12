#include <bits/stdc++.h>
#define ll long long
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
const double pi =     2.0*acos(0.0);

using namespace std;

///Code starts from here

int main()
{
    fast_io;
    int t,kase=1;
    cin>>t;

    while(t--)
    {
        int n,i,j,k;
        cin>>n;
        int a[n];
        int ar[101];
        memset(ar,0,sizeof(ar));

        for(i=0;i<n;i++)
        {
            cin>>a[i];
            ar[a[i]]++;
            ///cout<<ar[a[i]]<<endl;
        }
        int sum=0;
        int v1[101],v2[101];
        memset(v1,0,sizeof(v1));
        memset(v2,0,sizeof(v2));
        for(i=0;i<101;i++)
        {
            //cout<<ar[i]<<endl;
            if(ar[i]>1)
            {
                v1[i]++;
                v2[i]++;
            }
            else if(ar[i]==1)
            {
                v1[i]++;
            }
        }
        ///for(auto x: v1) cout<<x<<endl;
        for(i=0;i<101;i++)
        {
            if(v1[i]==0)
            {
                sum+=i;
                break;
            }
        }
        for(i=0;i<101;i++)
        {
            if(v2[i]==0)
            {
                sum+=i;
                break;
            }
        }
        cout<<sum<<endl;

    }

    return 0;
}
