#include <bits/stdc++.h>
#define ll long long
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
const double pi =     2.0*acos(0.0);

using namespace std;

///Code starts from here
int main()
{
    fast_io;
    int t=1,kase=1;


    while(t--)
    {
        ll n,i,x,j,k,ans=INT_MAX;
        cin>>n;
        vector<ll>v;
        ll a[101];
        memset(a,0,sizeof(a));

        for(i=0;i<n;i++)
        {
            cin>>x;
            if(!a[x])
            {
                a[x]++;
                v.push_back(x);
            }
            else a[x]++;
        }
        sort(v.begin(),v.end());
        if(v.size()>3)
        {
            cout<<"-1"<<endl;
        }
        else if(v.size()==3)
        {
            if(v[2]-v[1]==v[1]-v[0])
            {
                cout<<v[1]-v[0]<<endl;
            }
            else cout<<"-1"<<endl;
        }
        else if(v.size()==2)
        {
            if((v[1]-v[0])%2)
            {
                cout<<v[1]-v[0]<<endl;
            }
            else
            {
                cout<<(v[1]-v[0])/2<<endl;
            }
        }
        else if(v.size()==1) cout<<"0"<<endl;

    }

    return 0;
}

