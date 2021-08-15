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
        ll n,i,j,k=1,x,flag=0;
        cin>>n;
        ll a[n];
        vector<ll>used(1002),ans(1002);

        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }

        for(i=2,k=1;i<=1000&&k<=11;i++)
        {
            flag=0;
            for(j=0;j<n;j++)
            {
                if(a[j]%i==0&&!ans[j])
                {
                    ans[j]=k;
                    flag=1;
                }
            }
            if(flag) k++;
        }
        int m=*max_element(ans.begin(),ans.end());

        cout<<m<<endl;
        for(i=0;i<n;i++)
        {
            cout<<ans[i]<<" ";
        }
        if(t) cout<<"\n";
    }

    return 0;
}
