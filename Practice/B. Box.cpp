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
        int n,i,j,k,flag=0;
        cin>>n;
        int a[n];
        vector<int>v(n);
        vector<int>rem,ans;
        map<int,int>mp;

        for(i=0;i<n;i++)
        {
            cin>>a[i];
            v[a[i]-1]=1;
            mp[a[i]]=i+1;

        }
        for(i=1;i<=n;i++)
        {
            if(mp[i]>i) flag=1;
        }

        if(flag)
        {
            cout<<"-1";
        }
        else
        {
            for(i=0;i<n;i++)
            {
                if(!v[i])
                    rem.push_back(i+1);
            }
            sort(rem.begin(),rem.end());

            ///ans[0]=a[0];
            cout<<a[0]<<" ";
            for(i=1,j=0;i<n;i++)
            {
                if(a[i]==a[i-1])
                {
                    ///ans.push_back(rem[j]);
                    cout<<rem[j]<<" ";
                    j++;
                }
                else
                    ///ans.push_back(a[i]);
                    cout<<a[i]<<" ";
            }
        }

        if(t) cout<<"\n";
    }

    return 0;
}

