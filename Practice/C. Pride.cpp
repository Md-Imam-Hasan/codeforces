#include <bits/stdc++.h>
#define ll long long
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
const double pi = 2.0*acos(0.0);

using namespace std;

///Code starts from here
ll gcd(ll a, ll b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
int main()
{
    fast_io;
    int t=1,kase=1;

    while(t--)
    {
        ll n,i,j,k,one=0,g,mn=INT_MAX;
        cin>>n;
        ll a[n];
        cin>>a[0];
        g=a[0];
        if(a[0]==1)
            one++;

        for(i=1;i<n;i++)
        {
            cin>>a[i];
            if(a[i]==1)
                one++;
            g=gcd(g,a[i]);
        }
        if(g>1)
        {
            cout<<"-1"<<endl;
        }
        else if(one)
        {
            cout<<n-one<<endl;
        }
        else
        {
            for(i=0;i<n-1;i++)
            {
                g=a[i];
                for(j=i+1;j<n;j++)
                {
                    g=gcd(g,a[j]);
                    if(g==1)
                    {
                        mn=min(mn,j-i);
                        break;
                    }
                }
            }
            cout<<mn+n-1<<endl;
        }
    }

    return 0;
}
