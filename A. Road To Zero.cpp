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
        ll x,y,a,b;
        cin>>x>>y>>a>>b;

        if(x==0&&y==0)
        {
            cout<<"0"<<endl;
        }
        else if(x==0&&y>0)
        {
            cout<<y*a<<endl;
        }
        else if(x>0&&y==0)
        {
            cout<<x*a<<endl;
        }
        else
        {
            ll ans1=(x+y)*a;
            ll value=min(x,y);
            ll ans2=value*b;
            ll value1=(x+y)-2*value;
            ans2+=value1*a;
            cout<<min(ans1,ans2)<<endl;
        }

    }

    return 0;
}
