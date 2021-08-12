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
    long long A[4];
    int i,j,a=0;

    FOR(i,0,4)
    {
        cin>>A[i];
    }
    sort(A,A+4);

    FOR(i,0,3)
    {
        if(A[i]==A[i+1])
        {
            a++;
        }
    }

    cout<<a<<endl;

    return 0;
}
