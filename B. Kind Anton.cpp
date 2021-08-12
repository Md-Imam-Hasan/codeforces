#include <bits/stdc++.h>
#define ll long long

using namespace std;

///Code starts from here
int main()
{
    int t;
    cin>>t;

    A:
    while(t--)
    {
        ll n,i,j,k,flag1=0,flag2=0,flag=0;
        cin>>n;
        ll a[n],b[n];

        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<n;i++)
        {
            cin>>b[i];
        }

        for(i=0;i<n;i++)
        {
            if(a[i]>b[i]&&!flag2)
            {
                cout<<"NO"<<endl;
                goto A;
            }
            else if(a[i]<b[i]&&!flag1)
            {
                cout<<"NO"<<endl;
                goto A;
            }

            if(a[i]==1) flag1=1;
            else if(a[i]==-1) flag2=1;
        }
        cout<<"YES"<<endl;
    }

    return 0;
}
