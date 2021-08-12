#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int A[n][2],i,j,t;
    t=0;

    for(i=0;i<n;i++)
    {
        for(j=0;j<2;j++)
        {
            cin>>A[i][j];
        }
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i!=j)
            {
                if(A[i][0]==A[j][1])
                {
                    t++;
                }
            }
        }
    }

    cout<<t<<endl;

    return 0;
}
