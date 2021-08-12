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

    int a,b,n;
    cin>>a>>b>>n;
    int i,j,t,v;

    t=a*10,j=-1;
    FOR(i,0,10)
    {
        if((t+i)%b==0)
        {
            j=i;
            break;
        }
    }

    if(j>=0)
    {
        printf("%d%d",a,j);
        FOR(i,0,n-1)
        {
            printf("%d",0);
        }
        cout<<endl;
    }

    else
        cout<<"-1"<<endl;

    return 0;
}
