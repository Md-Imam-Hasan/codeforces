#include<iostream>

using namespace std;

int main()
{
    int n,i,value=0;
    cin>>n;
    char A[n];

    for(i=0;i<n;i++)
    {
        cin>>A[i];
    }

    for(i=0;i<n;i++)
    {
        if(A[i]==A[i+1])
            value++;
    }

    cout<<value<<endl;

    return 0;
}
