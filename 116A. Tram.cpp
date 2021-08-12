#include<iostream>

using namespace std;

int main()
{
    int n,i,value=0,temp=0;
    cin>>n;
    int a[n],b[n];

    for(i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
        temp=temp-a[i]+b[i];
        if(temp>value)
            value=temp;
    }

    cout<<value<<endl;

    return 0;
}
