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
        ll a,b,c,n,i,j,k;
        cin>>a>>b>>c;

        if(c==0)
        {
            if(a>b) cout<<"1";
            else cout<<"0";
        }
        else if(a+c>b)
        {
            if(b+c<a)
                cout<<c+1;
            else
            {
                k=(a+c)-b;
                j=ceil(k/2.0);
                cout<<j;
            }

        }
        else cout<<"0";
        if(t) cout<<"\n";
    }

    return 0;
}

