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
        ll n,i,j,k=0,x,y;
        cin>>n>>x>>y;
        string s,p="1",q="1";
        cin>>s;
        for(i=1;i<=y;i++)
        {
            p+='0';
        }
        for(i=1;i<=x-y-1;i++)
        {
            q+='0';
        }
        q+=p;
        ///cout<<p<<" "<<q<<endl;
        reverse(q.begin(),q.end());
        reverse(s.begin(),s.end());
        for(i=0;i<x;i++)
        {
            if(q[i]!=s[i]) k++;
        }
        cout<<k<<endl;
        /*cout<<"Case "<<kase<<": "<<ans<<endl;
        kase++;
        if(t) cout<<"\n";*/
    }

    return 0;
}
