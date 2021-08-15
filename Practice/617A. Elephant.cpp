#include<iostream>

using namespace std;

int main()
{
    long long x,temp;
    cin>>x;

    if(x%5==0)
    {
        temp=x/5;
        cout<<temp<<endl;
    }
    else
    {
        temp=(x/5)+1;
        cout<<temp<<endl;
    }

    return 0;
}
