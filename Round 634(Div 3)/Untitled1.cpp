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
        ll n,a,b,cnt=0;
        cin>>n;

        if(n%2==0)
        {
            a=(n/2)+1;
            cnt=n-a;
        }
        else
        {
            a=(n/2)+1;
            cnt=n-a;
        }
        cout<<cnt;
        if(t) cout<<endl;
    }

    return 0;
}

