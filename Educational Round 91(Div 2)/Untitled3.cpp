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
        ll n,x,i,j,k,cnt=0,ans=0;
        cin>>n>>x;
        int a[n];

        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n,greater<int>());

        for(i=0;i<n;i++)
        {
            if(a[i]>=x)
            {
                ans++;
            }
            else
            {
                cnt++;
                if(a[i]*cnt>=x)
                {
                    ans++;
                    cnt=0;
                }
            }
        }
        cout<<ans;
        if(t) cout<<"\n";
    }

    return 0;
}
