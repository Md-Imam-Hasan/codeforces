#include<iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n,K;
    cin>>n>>K;
    int A[n],i,j,t;
    t=n;

    for(i=0;i<n;i++)
    {
        cin>>A[i];
    }
    sort(A,A+n);

    for(j=n-1;j>=0;j--)
    {
       if(A[j]>A[j-1]&&A[j]<=A[j-1]+K&&j-1>=0)
       {
           t--;
           while(A[j-1]==A[j-2]&&j-2>=0)
           {
               t--;
               j--;
           }
       }
    }
    cout<<t<<endl;

    return 0;

}
