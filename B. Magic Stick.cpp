#include <bits/stdc++.h>
#define ll long long

using namespace std;

///Code starts from here
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int x,y,i,j,k;
        cin>>x>>y;

        if(x>=y)
        {
            cout<<"yes"<<endl;
        }
        else if(x==2&&y<=3)
        {
            cout<<"yes"<<endl;
        }
        else if(x<4)
        {
            cout<<"no"<<endl;
        }
        else cout<<"yes"<<endl;
    }

    return 0;
}
