#include<iostream>

using namespace std;

int main()
{
    int a,b,c,n,t;
    cin>>a>>b>>c>>n;

    if(a>=c&&b>=c)
    {
        t=a+b-c;
    }

    else
    {
        cout<<"-1"<<endl;
        return 0;
    }

    if(t>=n)
        cout<<"-1"<<endl;
    else
        cout<<n-t<<endl;

    return 0;
}
