#include <bits/stdc++.h>
#define ll long long
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
const double pi = 2.0*acos(0.0);

using namespace std;

///Code starts from here
int main()
{
    fast_io;
    int t,kase=1;
    cin>>t;

    while(t--)
    {
        ll n,i,j,k;
        cin>>n>>k;
        ll a[n];
        ll sum=0;
        bool ok=1,ok1=0;

        for(i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
            if(k==a[i]) ok1=1;
        }
        ///sort(a,a+n);
        for(i=0;i<n-1;i++)
        {
            if(a[i]!=a[i+1]) ok=0;
        }
        if(!ok)
        {
            if(k*n==sum) cout<<"1"<<endl;
            else if(ok1) cout<<"1"<<endl;
            else cout<<"2"<<endl;
        }
        else if(ok&&ok1) cout<<"0"<<endl;
        else cout<<"2"<<endl;
    }

    return 0;
}

