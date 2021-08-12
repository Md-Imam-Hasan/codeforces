#include<iostream>

using namespace std;

int main()
{
    int n,m,t;
    cin>>m>>n;
    t=m;
    while(m>0)
    {
        t=t+m/n;
        m=m/n;
    }
    cout<<t<<endl;

    return 0;
}
