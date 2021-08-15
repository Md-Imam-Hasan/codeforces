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
    ll n,m,i,j,k,a=0,b=0,t,v,A[100000],B[100000];
    cin>>n;

    FOR(i,0,n)
    {
        cin>>t;
        A[t]=i+1;
        B[t]=n-i;
    }
    cin>>m;

    FOR(i,0,m)
    {
        cin>>v;
        a+=A[v];
        b+=B[v];

    }

    cout<<a<<" "<<b<<endl;

    return 0;
}
