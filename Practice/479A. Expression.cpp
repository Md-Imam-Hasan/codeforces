#include<iostream>

using namespace std;

int main()
{
    int a,b,c,i,temp=0,A[6];
    cin>>a>>b>>c;
    A[0]=a+b+c;
    A[1]=a*b+c;
    A[2]=a+b*c;
    A[3]=a*(b+c);
    A[4]=(a+b)*c;
    A[5]=a*b*c;

    for(i=0;i<6;i++)
    {
        if(A[i]>temp)
            temp=A[i];
    }

    cout<<temp<<endl;

    return 0;
}
