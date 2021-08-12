#include <bits/stdc++.h>
#define ll long long

using namespace std;

///Code starts from here
int main()
{
    int t;
    cin>>t;

    A:
    while(t--)
    {
        int n,i,j,k,flag=0;
        cin>>n;
        int a[n];
        vector<pair<int,int>>v;

        for(i=0;i<n;i++)
        {
            cin>>a[i];
            v.push_back(make_pair(a[i],i+1));
        }
        if(n==1)
        {
            cout<<"-1"<<endl;
            goto A;
        }
        sort(v.begin(),v.end());
        int mx=INT_MAX;
        for(i=0;i<n-1;i++)
        {
            if(v[i].first==v[i+1].first)
                {
                    mx=min(mx,abs(v[i].second-v[i+1].second)+1);
                    flag=1;
                }
        }
        if(flag)
        {
            cout<<mx<<endl;
        }
        else cout<<"-1"<<endl;
       /// if(t) cout<<"\n";
    }

    return 0;
}

