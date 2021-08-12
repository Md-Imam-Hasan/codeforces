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
    int A[n][2],i,j,k,t,v,a=0,b=0,c=0,d=0;

    FOR(i,0,n)
    {
            for(j=0;j<2;j++)
        {
            cin>>A[i][j];
        }
            if(A[i][0]==0)
            {
                ++a;
            }
            if(A[i][0]==1)
            {
                ++b;
            }
            if(A[i][1]==0)
            {
                ++c;
            }
            if(A[i][1]==1)
            {
                ++d;
            }
    }


    //cout<<a<<b<<c<<d<<endl;
    t=min(a,b);
    v=min(c,d);
    //cout<<t<<v<<endl;
    cout<<t+v<<endl;

    return 0;

}
