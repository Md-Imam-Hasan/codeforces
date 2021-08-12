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
#define FOR(i,j,n) for(i=j;i<n;i++)
#define ll long long

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int A[n],i,j,k,t=0,v;

    FOR(i,0,n)
    {
        cin>>A[i];
    }

    FOR(i,0,n)
    {
        if(A[i]>=m)
        {
        if(A[i]/m>t)
        {
            t=A[i]/m;
            v=i;
        }
        }
        else if(A[i]<m)
        {
            v=i;
        }
    }

    cout<<v+1<<endl;

    return 0;
}
