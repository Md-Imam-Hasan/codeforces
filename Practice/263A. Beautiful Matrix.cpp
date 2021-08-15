#include<iostream>

using namespace std;

int main()
{
    int A[5][5],i,j,a,b,value;

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            cin>>A[i][j];
            if(A[i][j]==1)
            {
                a=i+1;
                b=j+1;
            }
        }
    }

    if(a>=3)
        a=a-3;
    else a=3-a;

    if(b>=3)
        b=b-3;
    else b=3-b;

    value=a+b;

    cout<<value<<endl;

    return 0;
}
