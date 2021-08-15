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
        cin>>n>>k;
        int a[n];
        map<int,bool>mp;
        vector<int>v;

        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(!mp[a[i]]) v.push_back(a[i]);
            mp[a[i]]=true;
        }

        if(v.size()>k)
            cout<<"-1";
        else
        {
            if(v.size()==1)
            {
                cout<<n<<endl;
                for(i=0;i<n;i++)
                {
                    cout<<a[i]<<" ";
                }
            }
            else
            {
                cout<<n*k<<endl;
                k-=v.size();
                for(i=1;i<=n;i++)
                {
                    if(k)
                    {
                        if(!mp[i])
                            v.push_back(i),k--;
                    }
                }

                for(i=0;i<n;i++)
                {
                    for(j=0;j<v.size();j++)
                    {
                        cout<<v[j]<<" ";
                    }
                }
            }
        }
        if(t) cout<<"\n";
    }

    return 0;
}
