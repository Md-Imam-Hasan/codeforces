#include <bits/stdc++.h>
#define ll long long
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

///Code starts from here
int main()
{
    fast_io;

        ll n,i,j,k,cnt=0,mx=0;
        cin>>n;
        int a[n],b[n];
        map<ll,ll>mpa,mpb;

        for(i=0;i<n;i++)
        {
            cin>>a[i];
            mpa[a[i]]=i+1;
        }
        for(i=0;i<n;i++)
        {
            cin>>b[i];
            mpb[b[i]]=i+1;
        }
        for(i=0;i<n;i++)
        {
            if(mx<mpb[a[i]])
                mx=mpb[a[i]];
            else cnt++;
        }
        cout<<cnt<<endl;
    return 0;
}
