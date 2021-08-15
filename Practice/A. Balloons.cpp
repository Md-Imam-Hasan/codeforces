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
#define FOR(i,j,n) for(int i=j;i<n;i++)

using namespace std;

int main()
{
    int n;
    cin>>n;
    int A[n],i,j,l,k=2,sum=0,G=0,W=0,t=0;

    FOR(i,0,n)
    {
        cin>>A[i];
        sum+=A[i];
    }
    sort(A,A+n);

    if(n==1)
    {
        cout<<"-1"<<endl;
    }
    else
    {
        for(j=n-1,l=1;j>=0;j--,l++)
        {
            t+=A[j];
            sum=sum-A[j];
            G=l;
            W=n-l;
            if(t>sum)
            {
                break;
            }
        }
        if(G==n||W==n)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            cout<<k<<endl;
            cout<<W<<" "<<G<<endl;
        }
    }

    return 0;
}
