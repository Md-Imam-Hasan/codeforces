#include<iostream>

using namespace std;

int main()
{
    int n,i,j,x,y,value=0;
    cin>>n;
    int A[n];

    if(n==1)
    {
        cin>>A[0];
        cout<<value<<endl;
        return 0;
    }

    for(i=0;i<n;i++)
    {
        cin>>A[i];
        x=0,y=0;
        for(j=i;j>=0;j--)
        {
            if(A[i]>A[j])
            {
                x++;
            }
            else if(A[i]<A[j])
            {
                y++;
            }
        }
        if(x==i)
            value++;
        else if(y==i)
            value++;
    }

    cout<<value-1<<endl;

    return 0;
}
