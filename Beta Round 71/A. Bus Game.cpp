#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,y;
    cin>>x>>y;
    int count=0;

    while(x||y)
    {
        if(x>=2)
        {
            x-=2;
            if(y>=2)
            {
                y-=2;
                count++;
            }
        }
        else if(x==1)
        {
            x-=1;
            if(y>=12)
            {
                y-=12;
                count++;
            }
        }
        else if(x==0)
        {
            if(y>=22)
            {
                y-=22;
                count++;
            }
        }

        if(y>=22)
        {
            y-=22;
            count++;
        }
        else if(y>=12&&y<22)
        {
            y-=12;
            if(x>=1)
            {
                x-=1;
                count++;
            }
        }
        else if(y>=2&&y<12)
        {
            y-=2;
            if(x>=2)
            {
                x-=2;
                count++;
            }
        }
        else if(y==1)
            y--;
    }

    if(count%2!=0&&count!=0)
        cout<<"Ciel"<<endl;
    else cout<<"Hanako"<<endl;

    return 0;
}
