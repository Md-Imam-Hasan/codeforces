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
#define ll long long int
#define ull unsigned long long int

using namespace std;

bool prime[100002];

void Sieve()
{
    memset(prime,true,sizeof(prime));

    for (int p=2; p*p<=100001; p++)
    {
        if (prime[p]==true)
        {
            for (int i=p*2; i<=100001; i+= p)
                prime[i]=false;
        }
    }
}

int mod(int x,int n,int m)
{
    int y;
    if(n==0)
        return 1;
    else if(n%2==0)
    {
        y=mod(x,n/2,m);
        return (y*y)%m;
    }
    else
        return ((x%m)*mod(x,n-1,m))%m;
}



int main()
{
    int n;
    cin>>n;
    double a=(-0.02164465757*n*n)+(13.90039941*n)+(-402.9992737);
    int b=ceil(a);
    cout<<b<<endl;
    return 0;
}
