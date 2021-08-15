#include<iostream>

using namespace std;

int main()
{
    long long n,i,value=0,num1=0,num2=0,num3=0,num4=0;
    cin>>n;
    int A[n];

    for(i=0;i<n;i++)
    {
        cin>>A[i];
        if(A[i]==1)
            num1++;
        else if(A[i]==2)
            num2++;
        else if(A[i]==3)
            num3++;
        else
            num4++;
    }

    value=value+num4;

    if(num3>0&&num1==0)
    {
        value=value+num3;
        num3=0;
    }

    if(num2%2==0)
    {
        value=value+(num2/2);
        num2=0;
    }
    else
    {
        value=value+(num2/2);
        num2=2;
    }

    if(num1>0&&num3>0)
    {
        if(num1>num3)
        {
            value=value+num3;
            num1=num1-num3;
        }
        else if(num1<num3)
        {
            value=value+num3;
            num1=0;
        }
        else
        {
            value=value+num1;
            num1=0;
        }
    }

    num1=num1+num2;

    if(num1%4==0)
        value=value+(num1/4);
    else
        value=value+(num1/4)+1;

    cout<<value<<endl;

    return 0;
}
