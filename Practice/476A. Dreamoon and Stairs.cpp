#include<iostream>

using namespace std;

int main()
{
    int n,m,i,j,temp,value;
    cin>>n>>m;

    if(n%2==0)
        temp=n/2;
    else
        temp=(n/2)+1;

    if(temp%m==0)
        {
            cout<<temp<<endl;
            return 0;
        }
    else if(temp%m!=0)
    {
        for(i=0;i<(n/2);i++)
        {
            temp++;
            if(temp%m==0)
                {
                    cout<<temp<<endl;
                    return 0;
                }
        }
    }

    cout<<"-1"<<endl;

    return 0;
}
