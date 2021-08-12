#include<iostream>

using namespace std;

int main()
{
    long long n,m,t,t1,t2,t3,value1,value2;
    int a,b;

    cin>>n>>m>>a>>b;

    if(n%m==0)
        cout<<"0"<<endl;
    else if(n>m)
    {
        t=n-m;
        t1=n/m;
        t2=(t1+1)*m;
        t3=t2-n;
        value1=t*b;
        value2=t3*a;
        if(value1<value2)
            cout<<value1<<endl;
        else cout<<value2<<endl;
    }
    else if(n<m)
    {
        t=m-n;
        t1=n;
        value1=t*a;
        value2=t1*b;
        if(value1<value2)
            cout<<value1<<endl;
        else cout<<value2<<endl;
    }

    return 0;
}
