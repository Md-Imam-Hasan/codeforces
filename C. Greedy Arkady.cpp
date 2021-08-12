#include<iostream>

using namespace std;

int main()
{
    int n,k,M,D,a,b,i,value;
    cin>>n>>k>>M>>D;

    if(D==1)
        cout<<M;
    else if(D>1)
    {
        a=k*D;
        for(i=M;i>0;i--)
        {
            b=n/i;
            if(b>a)
                break;
            else if(b>k)
            value=k*i;
        }
    }
    cout<<value<<endl;

}
