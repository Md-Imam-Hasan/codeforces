#include <bits/stdc++.h>
#define ll long long
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

///Code starts from here
int main()
{
    fast_io;
    int t;
    cin>>t;

    while(t--)
    {
        ll n,s,i,j,k,sum=0,sum1=0,best=0,ans;
        cin>>n>>s;
        ll a[n];

        for(i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }

        if(sum<=s) cout<<"0";
        else
        {
            sum=0;
            for(i=0;i<n;i++)
            {
                sum+=a[i];
                if(best<a[i])
                {
                    best=a[i];
                    sum1=sum-best;
                    if(sum1>s&&sum>s) break;
                    else ans=i+1;
                }

            }
            cout<<ans;
        }
        if(t) cout<<"\n";
    }

    return 0;
}

