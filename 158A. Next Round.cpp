#include<iostream>

using namespace std;

int main()
{
    int n,k,i,value=0;
    cin>>n>>k;
    int A[n];

    for(i=0;i<n;i++)
    {
        cin>>A[i];
        if(i==(k-1))
            A[k-1]=A[i];
    }

    for(i=0;i<n;i++)
    {
        if(A[i]>0&&A[i]>=A[k-1])
            value++;
    }

    cout<<value<<endl;

    return 0;


}
