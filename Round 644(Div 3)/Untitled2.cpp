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
        int n,i,j,k,b,ans=INT_MAX;
        cin>>n;
        int a[n];

        for(i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);

        for(i=1;i<n;i++)
        {
            ans=min(ans,a[i]-a[i-1]);
        }
        cout<<ans;
        if(t) cout<<"\n";
    }

    return 0;
}
