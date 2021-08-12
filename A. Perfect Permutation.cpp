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
    int i,j=2,k=1;

    if(n%2==1)
    {
        cout<<"-1"<<endl;
        return 0;
    }

    FOR(i,1,n+1)
    {
        if(i%2!=0)
        {
            cout<<j<<" ";
            j+=2;
        }
        else if(i%2==0)
        {
            cout<<k<<" ";
            k+=2;
        }
    }

    return 0;
}
