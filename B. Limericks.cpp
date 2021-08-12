#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,i,x;
    cin>>a;

    for(i=2;i<a;i++)
    {
        if(a%i==0)
        {
            x=a/i;
            break;
        }
    }

    cout<<i<<x<<endl;
}
