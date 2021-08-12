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
        int n,i,j,k,even=0,odd=0,flag=0;
        cin>>n;
        int a[n];

        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]%2==0) even++;
            else odd++;
        }
        sort(a,a+n);

        if(even%2==0&&odd%2==0)
        {
            cout<<"YES";
        }
        else
        {
            for(i=1;i<n;i++)
            {
                if(a[i]-a[i-1]==1)
                    flag=1;
            }
            if(flag==1) cout<<"YES";
            else cout<<"NO";
        }
        if(t) cout<<"\n";
    }

    return 0;
}
