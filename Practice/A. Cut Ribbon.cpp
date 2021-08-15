#include <bits/stdc++.h>
#define ll long long

using namespace std;

///Code starts from here
int main()
{
    int n,a,b,c,mx=0,value;
    cin>>n>>a>>b>>c;

    for(int i=0;i<=4000;i++)
    {
        for(int j=0;j<=4000;j++)
        {
            value=n-(a*i+b*j);
            if(value>=0&&value%c==0)
            {
                mx=max(mx,i+j+(value/c));
            }
            ///else mx=max(mx,i+j);
        }
    }

    cout<<mx<<endl;

    return 0;
}

