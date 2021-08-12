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
        ll a,b,cnt=0;
        cin>>a>>b;
        if(a==0||b==0)
        {
            cout<<"0";
        }
        else
        {
            ll c=min(a,b);
            if(max(a,b)>=c*2)
            {
                cout<<c;
            }
            else
            {
                ll d=a+b;
                cout<<d/3;
            }

        }

        if(t) cout<<endl;
    }

    return 0;
}

