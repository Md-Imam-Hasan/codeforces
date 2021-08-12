#include<iostream>

using namespace std;

int intersect(int x1,int y1,int x2,int y2,int x3,int y3,int x4,int y4)
{
    double A1,B1,C1,A2,B2,C2,det;
        A1 = y2-y1;
        B1 = x1-x2;
        C1 = A1*x1+B1*y1;
        A2 = y4-y3;
        B2 = x3-x4;
        C2 = A2*x3+B2*y3;
        det= A1*B2-A2*B1;

        if(A1*x3+B1*y3==C1&&A2*x1+B2*y1==C2)
        {
            return 0;
        }

        else if(det==0)
        {
            return 0;
        }

        else return 1;
}

int main()
{
    int A[4][2],B[4][2],i,j,k,l,t;

    for(i=0;i<4;i++)
    {
        for(j=0;j<2;j++)
        {
            cin>>A[i][j];
        }
    }

    for(i=0;i<4;i++)
    {
        for(j=0;j<2;j++)
        {
            cin>>B[i][j];
        }
    }

    for(i=0,j=0;i<4||j<2;i++,j++)
    {
        for(k=0,l=0;k<4||l<2;k++,l++)
        {
            t=intersect(A[i][j],A[i][j+1],A[i+1][j],A[i+1][j+1],B[k][l],B[k][l+1],B[k+1][l],B[k+1][l+1]);

        }
        if(t==1)
            {
                cout<<"YES"<<endl;
                break;
            }
    }

    if(t==0) cout<<"NO"<<endl;

    return 0;
}
