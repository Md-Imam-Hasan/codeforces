#include<iostream>

using namespace std;

int main()
{
    int n,i;
    cin>>n;
    long long A[n],temp=0,value=0;

    if(n==1)
    {
        cin>>A[0];
        cout<<value<<endl;
        return 0;
    }

    for(i=0;i<n;i++)
    {
        cin>>A[i];
        if(A[i]>temp)
            temp=A[i];
    }

    for(i=0;i<n;i++)
    {
        value+=(temp-A[i]);
    }

    cout<<value<<endl;

    return 0;
}
