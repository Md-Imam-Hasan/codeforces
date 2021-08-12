#include<iostream>

using namespace std;
long long p[1000010];

/*long long number(long long x)
{
    long long divisor=0;
        for(long long j=1;j*j<=x;j++)
        {
            if(j*j==x)
                divisor+=1;
            else if(x%j==0)
                divisor+=2;
        }
        return divisor;
}*/

int main()
{
    long long a,b,c,i,j,k,value=0,sum=0;
    cin>>a>>b>>c;

    for(i=1;i<=a*b*c;i++)
    {
        for(j=i;j<=a*b*c;j+=i)
        {
            p[j]++;
        }
    }
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=b;j++)
        {
            for(k=1;k<=c;k++)
            {
                sum+=p[i*j*k]%1073741824;
            }
        }
    }

    cout<<sum%1073741824<<endl;

    return 0;
}
