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
        ll n,i,j,k;
        cin>>n;
        ll a[n];
        ll ar[200002];
        memset(ar,0,sizeof(ar));

        for(i=0;i<n;i++)
        {
            cin>>a[i];
            ar[a[i]]++;
        }
        ll p=0,mx=0;
        for(i=0;i<200002;i++)
        {
            if(ar[i]>mx)
            {
                mx=ar[i];
                p=i;
            }
        }
        cout<<n-mx<<endl;
        for(i=0;i<n;i++)
        {
            if(a[i]==p)
            {
                for(j=i-1;j>=0;j--)
                {
                    if(a[j]==p)
                    {
                        break;
                    }
                    else if(a[j]>p)
                    {
                        a[j]-=abs(a[j]-p);
                        cout<<"2 "<<j+1<<" "<<j+2<<endl;
                    }
                    else if(a[j]<p)
                    {
                        a[j]+=abs(a[j]-p);
                        cout<<"1 "<<j+1<<" "<<j+2<<endl;
                    }
                }
                for(j=i+1;j<n;j++)
                {
                    if(a[j]==p)
                    {
                        break;
                    }
                    else if(a[j]>p)
                    {
                        a[j]-=abs(a[j]-p);
                        cout<<"2 "<<j+1<<" "<<j<<endl;
                    }
                    else if(a[j]<p)
                    {
                        a[j]+=abs(a[j]-p);
                        cout<<"1 "<<j+1<<" "<<j<<endl;
                    }
                }
            }
        }
    }

    return 0;
}

