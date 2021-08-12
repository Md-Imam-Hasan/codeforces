#include <bits/stdc++.h>
#define ll long long

using namespace std;

///Code starts from here
int main()
{
    int n,m,x,y,i;
    cin>>n>>m;
    x=1;
    y=n;
    string s[4];
    int a,flag=1;

    for(i=1;i<=m;i++)
    {
        cin>>s[0];
        cin>>s[1];
        cin>>s[2];
        cin>>s[3];
        cin>>a;
        if(s[2]=="left")
        {
            y=min(y,a-1);
        }
        else
        {
            x=max(x,a+1);
        }
        if(x>y)
        {
            flag=0;
        }
    }
    if(flag)
    {
        cout<<(y-x)+1;
    }
    else cout<<"-1";

    return 0;
}

