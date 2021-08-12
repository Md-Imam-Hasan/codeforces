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
        ll n,i,j,k,x,cnt=INT_MAX;
        cin>>n;
        k=n-1;
        ll a[n];
        map<ll,ll>mp;
        map<ll,ll>::iterator it;

        for(i=0;i<n;i++)
        {
            cin>>a[i];
            mp[a[i]]++;
        }
        bool ok=0;
        for(i=0;i<n-1;i++)
        {
            if(a[i]!=a[i+1])
            {
                ok=1;
                break;
            }
        }
        if(ok)
        {
            cout<<"YES"<<endl;
            for(i=0;i<n;i++)
            {
                if(cnt>mp[a[i]])
                {
                    cnt=mp[a[i]];
                    x=i;
                }
            }

            for(i=0;i<n;i++)
            {
                if(a[i]!=a[x])
                {
                    cout<<x+1<<" "<<i+1<<endl;
                }
                else if(i!=x)
                {
                    for(j=0;j<n;j++)
                    {
                        if(a[j]!=a[x])
                        {
                            cout<<i+1<<" "<<j+1<<endl;
                            break;
                        }
                    }
                }
            }
        }
        else cout<<"NO"<<endl;
    }

    return 0;
}
