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
    int n;
    cin>>n;
    int A[n],i,t=1,v=1;

    FOR(i,0,n)
    {
        cin>>A[i];
    }
    sort(A,A+n);

    for(i=0;i<n-1;i++)
    {
        if(A[i]==A[i+1])
        {
            v+=1;
            if(v>t)
            {
                t=v;
            }
        }
        else if(A[i]!=A[i+1])
        {
            v=1;
        }
    }

    cout<<t<<endl;

    return 0;
}
