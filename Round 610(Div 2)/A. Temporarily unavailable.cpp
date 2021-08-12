#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int a,b,c,r,a1,b1,x,y,result;

    B:
    while(t--)
    {
        cin>>a>>b>>c>>r;
        x=0;
        if(a>=b)
        {
            a=a+b;
            b=a-b;
            a=a-b;
        }
        a1=c-r;
        b1=c+r;

        if(b<a1||b1<a)
        {
            cout<<abs(a-b)<<endl;
            goto B;
        }
        else
        {
            x=max(a,a1);
            y=min(b,b1);
        }

        result=abs(abs(a-b)-abs(x-y));


        cout<<result<<endl;

    }
}
