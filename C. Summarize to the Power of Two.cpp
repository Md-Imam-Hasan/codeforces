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
    long long A[n],i,j,k,l,t,a,x;
    vector<int>v;
    t=n;

    if(n==1)
    {
        cout<<"1"<<endl;
        return 0;
    }

    FOR(i,0,n)
    {
        cin>>A[i];
    }

    FOR(i,0,n)
    {
        for(j=0;j<n;j++)
        {
            a=A[i]+A[j];
            if(j==i)
            {
                continue;
            }
            else if(log2(a)==x(int))
            {
                t--;
            }
            else continue;
        }
    }
    cout<<t<<endl;

    return 0;
}
