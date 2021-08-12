#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int A[n],i,c=0;
    double t,sum=0.0;

    for(i=0;i<n;i++)
    {
        cin>>A[i];
        sum=sum+A[i];
    }
    t=sum/n;
    sort(A,A+n);

    for(i=0;t<4.50&&i<n;i++)
    {
        sum=sum-A[i];
        sum=sum+5.00;
        t=sum/n;
        c++;
    }

    cout<<c<<endl;

    return 0;

}
