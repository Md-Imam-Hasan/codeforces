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
        ll n,i,j,k;
        cin>>n;
        int a[n];

        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=1;i<n;i++)
        {
            if(abs(a[i]-a[i-1])>1)
            {
                cout<<"YES"<<endl;
                cout<<i<<" "<<i+1<<endl;
                goto A;
            }
        }
        cout<<"NO"<<endl;
    }

    return 0;
}

