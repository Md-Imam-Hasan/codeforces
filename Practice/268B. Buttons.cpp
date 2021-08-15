#include<iostream>

using namespace std;

int main()
{
    int n,i,temp=1,value=0;
    cin>>n;

    for(i=0;i<n;i++)
    {
        temp+=i;
        value+=temp;
    }

    cout<<value<<endl;

    return 0;
}
