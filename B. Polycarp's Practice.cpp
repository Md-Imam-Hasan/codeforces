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
    int n,k;
    cin>>n>>k;
    int A[n],B[k],i,j,p,a;

    FOR(i,0,n)
    {
        cin>>A[i];
    }
    sort(A,A+n);

    FOR(i,0,n)
    {
        p=0;
        a=A[i];
        for(j=i+1;j<n;j++)
        {
            if(a>=A[j])
            p++;
            else break;
        }
        B[]
    }
    return 0;
}
