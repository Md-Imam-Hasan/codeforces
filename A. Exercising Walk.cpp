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
        int a,b,c,d,x,y,x1,y1,x2,y2;
        cin>>a>>b>>c>>d>>x>>y>>x1>>y1>>x2>>y2;
        x+=(b-a);
        y+=(d-c);

        if(x>=x1&&x<=x2&&y>=y1&&y<=y2&&(a+b==0||x2>x1)&&(c+d==0||y2>y1))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

    return 0;
}

