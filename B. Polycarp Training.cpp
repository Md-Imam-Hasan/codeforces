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
        ll n,i,j=-1,k=0,x,ans=0;
        cin>>n;
        vector<ll>v;

        for(i=0;i<n;i++)
        {
            cin>>x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());

        while(1)
        {
            k++;
            j=lower_bound(v.begin()+j+1,v.end(),k)-v.begin();
            ///cout<<j<<endl;
            if(j==n) break;
        }
        cout<<k-1<<endl;
        /*cout<<"Case "<<kase<<": "<<ans<<endl;
        kase++;
        if(t) cout<<"\n";*/
    }

    return 0;
}

