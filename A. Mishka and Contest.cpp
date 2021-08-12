#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int A[n],i,j,t=0;

    for(i=0;i<n;i++)
    {
        cin>>A[i];
    }

    for(i=0;i<n;i++)
    {
        if(A[i]>k)
            break;
        else t++;
    }

    if(t==n)
    {
        cout<<t<<endl;
        return 0;
    }

    for(j=n-1;j>=0;j--)
    {
        if(A[j]>k)
            break;
        else t++;
    }

    cout<<t<<endl;

    return 0;

}
