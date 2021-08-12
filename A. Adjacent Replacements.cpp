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
#define PI acos(-1.0)

using namespace std;

int main()
{
    int n;
    cin>>n;
    long long A[n],i,j,k;

    FOR(i,0,n)
    {
        cin>>A[i];
    }

    FOR(i,0,n)
    {
        if(A[i]%2==0)
        {
            A[i]=A[i]-1;
            cout<<A[i]<<" ";
        }
        else cout<<A[i]<<" ";
    }

    return 0;
}
