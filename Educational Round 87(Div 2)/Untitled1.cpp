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
        ll a,b,c,d,cnt=0,value=0,x,y;
        cin>>a>>b>>c>>d;

        value+=b;
        if(a<=b) cout<<value;
        else
        {
            x=a-b;
            if(c<=d) cout<<"-1";
            else
            {
                y=c-d;
                if(x%y==0)
                {
                    cnt=x/y;
                    value+=c*cnt;
                    cout<<value;
                }
                else
                {
                    cnt=(x/y)+1;
                    value+=c*cnt;
                    cout<<value;
                }
            }
        }
        if(t) cout<<"\n";
    }

    return 0;
}

