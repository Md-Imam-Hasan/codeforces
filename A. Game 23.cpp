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
        ll n,i,j,k,m,sum=0;
        cin>>n>>m;
        if(n>m)
        {
            cout<<"-1"<<endl;
        }
        else if(n==m)
        {
            cout<<"0"<<endl;
        }
        else
        {
            if(m%n)
            {
                cout<<"-1"<<endl;
            }
            else
            {
                k=m/n;
                while(k>1)
                {
                    if(k%2) break;
                    k/=2;
                    sum++;
                }
                while(k>1)
                {
                    if(k%3) break;
                    k/=3;
                    sum++;
                }
                if(k==1) cout<<sum<<endl;
                else cout<<"-1"<<endl;
            }
        }
    }

    return 0;
}

