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
        ll n,i,j,k;
        cin>>n;
        int a[n],even=0,odd=0;

        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(i%2==0&&a[i]%2!=0) odd++;
            else if(i%2!=0&&a[i]%2==0) even++;
        }
        if(even==odd) cout<<odd;
        else cout<<"-1";
        if(t) cout<<"\n";
    }

    return 0;
}
