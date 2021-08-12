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
        ll n,s,i,j,k;
        cin>>n>>s>>k;
        int a[k];
        map<int,int>mp;

        for(i=0;i<k;i++)
        {
            cin>>a[i];
            mp[a[i]]=1;
        }

        j=s;
        k=s;
        ll ans1=-1,ans2=-1;

        for(;j<=n;j++)
        {
            if(mp[j]!=1)
            {
                ans1=j-s;
                break;
            }
        }

        for(;k>0;k--)
        {
            if(mp[k]!=1)
            {
                ans2=s-k;
                break;
            }
        }
        if(ans1==-1) cout<<ans2<<endl;
        else if(ans2==-1) cout<<ans1<<endl;
        else
        cout<<min(ans1,ans2)<<endl;
        mp.clear();

        ///if(t) cout<<"\n";
    }

    return 0;
}

