#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<stack>
#include<cmath>
#include<iomanip>
#include<stdio.h>
#include<math.h>
#include <bits/stdc++.h>
#define FOR(i,j,n) for(i=j;i<n;i++)

using namespace std;

int main()
{
    int n,i,j,t,u,v;
    long long d;
    cin>>n>>d;
    long long A[n];

    FOR(i,0,n)
    {
        cin>>A[i];
    }
    t=n*2;

    FOR(i,0,n-1)
    {
        v=A[i+1]-A[i];
        if(v==2*d)
            t--;
        else if(v<2*d)
            t-=2;
    }

    cout<<t<<endl;

    return 0;
}
