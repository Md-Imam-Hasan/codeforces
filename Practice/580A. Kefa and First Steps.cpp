#include<iostream>

using namespace std;

int main()
{
    long long n,i,j=0,temp=1,value=1;
    cin>>n;
    long long A[n];

    if(n==1)
    {
        cin>>A[0];
        cout<<value<<endl;
        return 0;
    }

    for(i=0;i<n;i++)
    {
        cin>>A[i];
        if(A[i]>=A[i-1])
        {
            value++;
            if(value>temp)
            {
                temp=value;
            }
        }
        else
        {
            value=1;
        }

    }

    cout<<temp<<endl;

    return 0;
}
