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
    int n,m,i,j;
    cin>>n>>m;
    int A[n][m],B[n][m];
    vector<int>va[n+m],vb[n+m];

    FOR(i,0,n)
    {
        FOR(j,0,m)
        {
            cin>>A[i][j];
            va[i+j].push_back(A[i][j]);
        }
    }

    FOR(i,0,n)
    {
        FOR(j,0,m)
        {
            cin>>B[i][j];
            vb[i+j].push_back(B[i][j]);
        }
    }
    int c=0;
    bool ok=1;
    FOR(i,0,n+m-1)
    {
        sort(va[i].begin(),va[i].end());
        sort(vb[i].begin(),vb[i].end());
        if(va[i]!=vb[i])
            ok=0;
    }

    if(ok)
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}
