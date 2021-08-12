
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
    ///cin>>t;

    while(t--)
    {
        ll n,i,j,k,a,b,x,y,flg=0;
        cin>>n>>a>>x>>b>>y;
        while(a!=x&&b!=y)
        {
            if(a==n) a=1;
            else a++;
            if(b==1) b=n;
            else b--;
            if(a==b)
            {
                flg=1;
                break;
            }
        }
        if(flg) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }

    return 0;
}
