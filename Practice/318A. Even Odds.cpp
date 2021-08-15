#include<iostream>

using namespace std;

int main()
{
    long long n,k,i,j,value;
    cin>>n>>k;

    if(n%2==0)
    {
        i=n/2;
    }
    else
    {
        i=(n/2)+1;
    }

    if(k<=i)
    {
        value=(2*k)-1;
        cout<<value<<endl;
    }
    else if(k>i)
    {
        j=k-i;
        value=2*j;
        cout<<value<<endl;
    }

    return 0;
}
