#include<iostream>

using namespace std;

int main()
{
    int c1,c2,c3,c4,c5,sum,b;
    cin>>c1>>c2>>c3>>c4>>c5;
    sum=c1+c2+c3+c4+c5;

    if(sum==0)
        cout<<"-1"<<endl;

    else if(sum%5==0)
    {
        b=sum/5;
        cout<<b<<endl;
    }
    else
        cout<<"-1"<<endl;

    return 0;
}
