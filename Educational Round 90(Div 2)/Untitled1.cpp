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
        ll a,b,c;
        cin>>a>>b>>c;

        if(a>=c)
        {
            cout<<"-1 ";
        }
        else if(a<c)
        {
            cout<<"1 ";
        }
        if(c/b>=a)
        {
            cout<<"-1";
        }
        else
        {
            cout<<b%1000000001;
        }
        cout<<endl;

    }

    return 0;
}

