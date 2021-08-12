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
        ll n,i,j,k,cnt=0;
        cin>>n;

        if(n==1)
        {
            cout<<"0";
            if(t) cout<<"\n";
            goto A;
        }

        while(n>=2)
        {
            i=2;
            j=2;
            while(n>i)
            {
                j=j+3;
                if(i+j<=n) i+=j;
                else break;
            }
            n=n-i;
            cnt++;
        }
        cout<<cnt;
        if(t) cout<<"\n";
    }

    return 0;
}

