#include<iostream>

using namespace std;

int main()
{
    long long k,n,w,i,x=0,bm;
    cin>>k>>n>>w;

    for(i=1;i<=w;i++)
    {
        x+=i*k;
    }

    if(x>n)
    {
       bm=x-n;
       cout<<bm<<endl;
    }
    else cout<<0<<endl;

    return 0;
}
