#include<iostream>
#include<stdio.h>
#define ll long long
using namespace std;

ll NCR(int n,int r)
{
    ll y=1,i;

    for(i=0;i<r;i++)
    {
        y=y*(n-i)/(i+1);
    }
    return y;
}
int main()
{
    int n,m,t;
    scanf("%d %d %d",&n,&m,&t);
    int i,j;
    ll x=0;

    for(i=4;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            if(i+j==t)
            {
                x+=(NCR(n,i)*NCR(m,j));
            }
        }
    }

  printf("%I64d",x);

}
