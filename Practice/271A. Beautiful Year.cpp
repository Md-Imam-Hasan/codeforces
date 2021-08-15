#include<iostream>

using namespace std;

int main()
{
    int y,i,j,k,l,A[4],temp,value;
    cin>>y;
    int x=y+1;

    for(i=x;;i++)
    {
        temp=i;
        for(j=0;j<4;j++)
        {
            A[j]=temp%10;
            temp=temp/10;
        }

        value=0;

        for(k=0;k<4;k++)
        {
            for(l=k+1;l<4;l++)
            {
                if(A[l]==A[k])
                {
                    value++;
                }
            }

        }

        if(value==0)
            {
                cout<<i<<endl;
                break;
            }
        else
            continue;
    }

    return 0;
}
