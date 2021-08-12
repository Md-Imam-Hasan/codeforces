#include<stdio.h>

int main()
{
    long long int n,m,a,x=0,y=0,count;
    scanf("%lld %lld %lld",&n,&m,&a);

    while(n>0)
    {
        n=n-a;
        x++;
    }

    while(m>0)
    {
        m=m-a;
        y++;
    }

    count=x*y;
    printf("%lld",count);

    return 0;
}
