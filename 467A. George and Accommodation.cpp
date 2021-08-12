#include<iostream>

using namespace std;

int main()
{
    int n,i,j,value=0;
    cin>>n;
    int A[n][2];

    for(i=0;i<n;i++)
    {
        for(j=0;j<2;j++)
        {
            cin>>A[i][j];
        }
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<1;j++)
        {
            if((A[i][j]+2)<=A[i][j+1])
                value++;
        }
    }

    cout<<value<<endl;

    return 0;
}
