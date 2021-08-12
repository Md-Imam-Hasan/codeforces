#include<iostream>

using namespace std;

int main()
{
    int n,i,x,y,value1=0,value2=0;
    cin>>n;
    int A[n];

    for(i=0;i<n;i++)
    {
        cin>>A[i];

        if(A[i]%2==0)
        {
            value1++;
            x=i+1;
        }
        else
        {
            value2++;
            y=i+1;
        }
    }

    if(value1==1)
        cout<<x<<endl;
    else
        cout<<y<<endl;

    return 0;
}

