#include<iostream>

using namespace std;

int main()
{
    long long n,i,value;
    cin>>n;

    if(n%2==0)
        {
            i=n/2;
            cout<<i<<endl;
        }
    else
    {
        i=(n/2)+1;
        cout<<-i<<endl;
    }

    return 0;

}
