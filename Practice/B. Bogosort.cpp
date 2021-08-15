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
        int n,i,j,k,x;
        cin>>n;
        vector<int>v;

        for(i=0;i<n;i++)
        {
            cin>>x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());

        for(i=0;i<n;i++)
        {
            cout<<v[i]<<" ";
        }
        if(t) cout<<"\n";
    }

    return 0;
}

