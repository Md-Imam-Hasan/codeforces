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
    int A[n],i,j,k,t;
    vector<int>v;

    FOR(i,0,n)
    {
        cin>>A[i];
    }

    FOR(i,0,n-1)
    {
        if(A[i+1]==1)
            v.push_back(A[i]);
    }
    v.push_back(A[n-1]);
    t=v.size();
    cout<<t<<endl;
    FOR(i,0,t)
    {
        cout<<v[i];
        cout<<" ";
    }

    return 0;
}
