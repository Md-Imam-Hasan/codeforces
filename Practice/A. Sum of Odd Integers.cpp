#include <bits/stdc++.h>
#define ll long long

using namespace std;

///Code starts from here
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        ll n,i,j,k;
        cin>>n>>k;
        if(n%2==1&&k%2==1&&k*k<=n)
        {
            if(n/k>=k) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else if(n%2==0&&k%2==0&&k*k<=n)
        {
            if(n/k>=k) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}

