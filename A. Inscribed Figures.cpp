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
        ll n,i,j,k=0;
        cin>>n;
        ll a[n];

        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        ll ans=0;
        for(i=1;i<n;i++)
        {
            if((a[i]==2&&a[i-1]==3)||(a[i]==3&&a[i-1]==2))
            {
                k=1;
                break;
            }
            else if((a[i]==2&&a[i-1]==1)||(a[i]==1&&a[i-1]==2))
            {
                ans+=3;
            }
            else if((a[i]==1&&a[i-1]==3)||(a[i]==3&&a[i-1]==1))
            {
                ans+=4;
            }
        }
        if(!k)
        {
            for(i=1;i<n-1;i++)
            {
                if(a[i]==1)
                {
                    if(a[i-1]==3&&a[i+1]==2) ans--;
                    ///else if(a[i-1]==2&&a[i+1]==3) ans-=2;
                }
            }
        }
        if(k) cout<<"Infinite"<<endl;
        else
        {
            cout<<"Finite\n"<<ans<<endl;
        }
        /*cout<<"Case "<<kase<<": "<<ans<<endl;
        kase++;
        if(t) cout<<"\n";*/
    }

    return 0;
}

