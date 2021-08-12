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
        ll n,i,j,k;
        cin>>n;
        int a[n];

        for(i=0;i<n;i++)
        {
            cin>>a[i];
            a[i]--;
        }

        vector<int>ans(n),tf(n);

        for(i=0;i<n;i++)
        {
            if(!tf[i])
            {
                vector<int>temp;
                while(!tf[i])
                {
                    temp.push_back(i);
                    tf[i]=true;
                    i=a[i];
                }
                for(auto x:temp)
                {
                    ans[x]=temp.size();
                }
            }
        }

        for(auto y:ans)
        {
            cout<<y<<" ";
        }
        if(t) cout<<"\n";
    }

    return 0;
}

