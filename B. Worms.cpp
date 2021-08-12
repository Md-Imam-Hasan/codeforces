#include <bits/stdc++.h>
#define ll long long

using namespace std;

///Code starts from here
int main()
{
    int n,i,j,k,sum=0;
        cin>>n;
        int a[n];
        map<int,int>mp;

        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        j=1;
        for(i=0;i<n;i++)
        {
            sum+=a[i];
            for(;j<=sum;j++)
            {
                mp[j]=i+1;
            }
        }
        int m,x;
        cin>>m;
        for(i=0;i<m;i++)
        {
            cin>>x;
            cout<<mp[x]<<endl;
        }

    return 0;
}

