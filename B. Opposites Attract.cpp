#include<iostream>

using namespace std;
long long int b[21];

long long int sum(long long int y)
{
    return (y*(y-1))/2;
}
int main()
{
    int n;
    cin>>n;
    int a[n],i;
    long long int x=0,z;

    for(i=0;i<n;i++)
    {
        cin>>a[i];
        b[a[i]+10]++;
    }

    for(i=0;i<11;i++)
    {
        if(i==10)
        {
            z=b[i];
            x+=sum(z);
        }
        else x+=b[i]*b[20-i];
    }

    cout<<x<<endl;

    return 0;
}
