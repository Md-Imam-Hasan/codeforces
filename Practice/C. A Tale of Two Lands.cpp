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
        ll n,i,j,k,x;
        cin>>n;
        vector<ll>v;

        for(i=0;i<n;i++)
        {
            cin>>x;
            if(x>=0) v.push_back(x);
            else
            {
                x*=(-1LL);
                v.push_back(x);
            }
        }
        sort(v.begin(),v.end());
        ll ans=0,temp;

        for(i=0;i<n;i++)
        {
            temp=v[i]*2;
            ll it=upper_bound(v.begin(),v.end(),temp)-v.begin()-1;
            ans+=it-i;

        }
        cout<<ans<<endl;
        /*cout<<"Case "<<kase<<": "<<ans<<endl;
        kase++;
        if(t) cout<<"\n";*/
    }

    return 0;
}
