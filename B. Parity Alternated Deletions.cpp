#include <bits/stdc++.h>
#define ll long long
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
const double pi = 2.0*acos(0.0);

using namespace std;

///Code starts from here
int main()
{
    fast_io;
    int t=1,kase=1;

    while(t--)
    {
        ll n,i,j,k,o=0,e=0;
        cin>>n;
        ll a[n];
        ll sum=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
            if(a[i]%2) o++;
            else e++;
        }
        sort(a,a+n);
        if(abs(o-e)<=1)
        {
            cout<<"0"<<endl;
        }
        else
        {
            if(o>e)
            {
                o=e+1;
                for(i=n-1;i>=0;i--)
                {
                    if(a[i]%2&&o)
                    {
                        sum-=a[i];
                        o--;
                    }
                    else if(a[i]%2==0&&e)
                    {
                        sum-=a[i];
                        e--;
                    }
                }
            }
            else if(e>o)
            {
                e=o+1;
                for(i=n-1;i>=0;i--)
                {
                    if(a[i]%2&&o)
                    {
                        sum-=a[i];
                        o--;
                    }
                    else if(a[i]%2==0&&e)
                    {
                        sum-=a[i];
                        e--;
                    }
                }
            }
            cout<<sum<<endl;
        }

    }

    return 0;
}

