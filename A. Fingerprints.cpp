#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

int main()
{
    int n,m,i,j;
    cin>>n>>m;
    int A[n],B[m];

    for(i=0;i<n;i++)
    {
        cin>>A[i];
    }
    for(j=0;j<m;j++)
    {
        cin>>B[j];
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(A[i]==B[j])
            {
                cout<<A[i]<<" ";
            }
        }
    }

    return 0;
}
