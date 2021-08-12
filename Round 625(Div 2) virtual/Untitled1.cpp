#include <bits/stdc++.h>
#define ll long long
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

///Code starts from here
int main()
{
    fast_io;
    ll n,i,j,k,cnta=0,cntb=0,cnt=0;
        cin>>n;
        int a[n],b[n];

        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]==1) cnta++;
        }

        for(i=0;i<n;i++)
        {
            cin>>b[i];
            if(b[i]==1) cntb++;
        }


        for(i=0;i<n;i++)
        {
            if(a[i]==1&&b[i]==1)
                cnt++;
        }
        cnta-=cnt;
        cntb-=cnt;

        ///cout<<cnta<<" "<<cntb<<" "<<cnt<<endl;
        if(cnta)
        cout<<(cntb/cnta)+1<<endl;
        else cout<<"-1"<<endl;
    return 0;
}
