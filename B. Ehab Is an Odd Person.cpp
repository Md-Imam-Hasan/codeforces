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
        ll n,i,j,k,odd=0,even=0;
        cin>>n;
        int a[n];

        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]%2) odd++;
            else even++;
        }
        if(odd&&even)
        {
            sort(a,a+n);
            for(auto x:a) cout<<x<<" ";
            cout<<endl;
        }
        else
        {
            for(auto x:a) cout<<x<<" ";
            cout<<endl;
        }


        /*cout<<"Case "<<kase<<": "<<ans<<endl;
        kase++;
        if(t) cout<<"\n";*/
    }

    return 0;
}

