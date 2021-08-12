#include <bits/stdc++.h>
#define ll long long
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

///Code starts from here
int main()
{
    fast_io;
    int t;
    cin>>t;

    while(t--)
    {
        ll n,i,j,k,flag=0,cnt=0;
        cin>>n;
        ll a[n];

        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }

        /*for(i=0;i<n-1;i++)
        {
            if(a[i]>a[i+1])
            {
                if(flag) continue;
                else flag=1;
            }
            else if(a[i]<a[i+1])
            {
                if(flag)
                {
                    cnt++;
                    flag=0;
                }
                else continue;
            }
        }*/
        ll L=0,R=0;
        for(i=0;i<n;i++)
        {
            if(a[i]!=i+1)
            {
                L=i;
                flag=1;
                break;
            }
        }
        for(i=n-1;i>=0;i--)
        {
            if(a[i]!=i+1)
            {
                R=i;
                flag=1;
                break;
            }
        }
        ///cout<<R<<endl;
        if(!flag)
        {
            cout<<"0";
        }
        else
        {
            flag=0;
            for(i=L;i<=R;i++)
            {
                if(a[i]==i+1)
                {
                    flag=1;
                    break;
                }
            }
            if(flag) cout<<"2";
            else cout<<"1";
        }

        if(t) cout<<"\n";
    }

    return 0;
}
