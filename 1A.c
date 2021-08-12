#include<stdio.h>

int main()
{
    long long int n,m,a;
    scanf("%lld %lld %lld",&n,&m,&a);

    long long int x;

    if(n%a==0)
        x=n/a;
    else
    {
        x=n/a;
        x++;
    }

    long long int y;

    if(m%a==0)
        y=m/a;
    else
    {
        y=m/a;
        y++;
    }

    long long int count;

    count=x*y;

    printf("%lld",count);

    return 0;
}
