#include <bits/stdc++.h>
#define ll long long
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
const double pi =     2.0*acos(0.0);

using namespace std;

///Code starts from here
int main()
{
    fast_io;
    ll t,i=0,j,k,x=0,n,flag=0,m=4294967296;
    cin>>t;
    string s;
    ll a[100005]={1};
    ///cout<<a[0]<<" "<<a[1]<<endl;

    while(t--)
    {
        cin>>s;
        if(s=="add")
        {
            if(x+a[i]<m)
            {
                x+=a[i];
            }
            else flag=1;
        }
        else if(s=="for")
        {
            cin>>n;
            i++;
            a[i]=min(m,a[i-1]*n);
        }
        else if(s=="end")
        {
            i--;
        }
    }
    if(flag) cout<<"OVERFLOW!!!"<<endl;
    else cout<<x<<endl;

    return 0;
}
