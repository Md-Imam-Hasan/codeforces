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
        ll a,b,c,d,e;
        cin>>a>>b;
        c=min(a,b);
        d=max(a,b);
        e=max(d,(2*c));

        cout<<e*e;
        if(t) cout<<"\n";
    }

    return 0;
}

