#include <bits/stdc++.h>
#define ll long long
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
const double pi =     2.0*acos(0.0);

using namespace std;

///Code starts from here
int main()
{
    fast_io;
    int t;
    cin>>t;

    while(t--)
    {
        ll n,i,j,k,sum=0;
        cin>>n>>k;
        int a[n],b[n];

        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        for(i=0;i<n;i++)
        {
            cin>>b[i];
        }
        sort(b,b+n,greater<int>());
        i=0;
        while(k)
        {
            if(b[i]>a[i])
            {
                sum+=b[i];
                k--;
                i++;
            }
            else break;

        }
        for(;i<n;i++)
        {
            sum+=a[i];
        }

        cout<<sum;
        if(t) cout<<"\n";
    }

    return 0;
}

