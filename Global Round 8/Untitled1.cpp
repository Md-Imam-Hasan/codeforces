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
        ll a,b,n,i,j,k,cnt=0;
        cin>>a>>b>>n;

        while(a<=n||b<=n)
        {
            if(a<=b)
            {
                a+=b;
                cnt++;
                if(a>n) break;
            }
            else if(b<a)
            {
                b+=a;
                cnt++;
                if(b>n) break;
            }
        }
        cout<<cnt;
        if(t) cout<<"\n";
    }

    return 0;
}
