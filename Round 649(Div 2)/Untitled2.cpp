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
        int a[n];
        vector<int>v;

        for(i=0;i<n;i++) cin>>a[i];

        for(i=0;i<n;i++)
        {
            if(i==0||i==n-1)
                v.push_back(a[i]);
            else if(a[i]>a[i-1]&&a[i]>a[i+1])
                v.push_back(a[i]);
            else if(a[i]<a[i-1]&&a[i]<a[i+1])
                v.push_back(a[i]);
        }

        cout<<v.size()<<endl;

        for(i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
        }

        if(t) cout<<"\n";
    }

    return 0;
}
