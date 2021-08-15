#include<iostream>

using namespace std;

int main()
{
    int n,i;
    double half,total_problem=0.0,value=0.0;
    cin>>n;
    int A[n];

    for(i=0;i<n;i++)
    {
        cin>>A[i];
        total_problem+=A[i];
    }

    half=total_problem/2;

    for(i=0;i<n;i++)
    {
        value+=A[i];
        if(value>=half)
            break;
    }

    cout<<i+1<<endl;

    return 0;
}
