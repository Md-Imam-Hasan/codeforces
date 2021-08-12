#include<iostream>

using namespace std;

int main()
{
    long long k,n,s,p,a,value;
    cin>>k>>n>>s>>p;

    if(n%s==0)
    {
        a=n/s;
        value=k*a;
        if(value%p==0)
            cout<<value/p<<endl;
        else
            cout<<(value/p)+1<<endl;
    }
    else
    {
        a=(n/s)+1;
        value=k*a;
        if(value%p==0)
            cout<<value/p<<endl;
        else
            cout<<(value/p)+1<<endl;
    }

    return 0;
}
