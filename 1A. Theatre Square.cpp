#include<iostream>

using namespace std;

int main()
{
    long long int n,m,a,x=0,y=0,value;
    cin>>n>>m>>a;

    if(n%a==0)
        x=n/a;
    else x=(n/a)+1;

    if(m%a==0)
        y=m/a;
    else y=(m/a)+1;

    value=x*y;
    cout<<value<<endl;

    return 0;
}
