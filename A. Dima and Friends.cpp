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
    int n;
    cin>>n;
    int A[n],i,j,k,t,v,a=0,b=0;

    FOR(i,0,n)
    {
        cin>>A[i];
        a+=A[i];
    }

    FOR(i,1,6)
    {
        if((a+i)%(n+1)!=1)
            b++;
    }

    cout<<b<<endl;

    return 0;
}
