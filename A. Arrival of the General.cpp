#include<iostream>
#include<string.h>
#include<algorithm>
#include<vector>
#include<queue>
#include<stack>
#include<cmath>
#include<iomanip>
#include<stdio.h>
#include<math.h>
#define FOR(i,j,n) for(int i=j;i<n;i++)

using namespace std;

int main()
{
    int n;
    cin>>n;
    int A[n],i,j,k,t,v,a=0,b=1000;

    FOR(i,0,n)
    {
        cin>>A[i];
    }

    for(i=0,j=n-1;i<n&&j>=0;i++,j--)
    {
        if(A[i]>a)
        {
            a=A[i];
            t=i;
        }
        if(A[j]<b)
        {
            b=A[j];
            v=j;
        }
    }

    //cout<<t<<v<<endl;

    if(t>v)
    {
        k=t+(n-(v+2));
    }
    else
    {
    k=t+(n-(v+1));
    }
    cout<<k<<endl;

    return 0;
}
