#include <bits/stdc++.h>
#define ll long long
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

///Code starts from here
int main()
{
    fast_io;
    int h,w,i,j,k;
    cin>>h>>w;
    char s[h][w];
    int flag=0;

    for(i=0;i<h;i++)
    {
        for(j=0;j<w;j++)
        {
            cin>>s[i][j];
        }
    }

    for(i=1;i<h-1;i++)
    {
        for(j=1;j<w-1;j++)
        {
            if(s[i][j]=='*')
            {
                if(s[i-1][j]=='*'&&s[i+1][j]=='*'&&s[i][j-1]=='*'&&s[i][j+1]=='*')
                {
                    flag=1;
                    s[i][j]='.';
                    for(k=i-1;k>=0;k--)
                    {
                        if(s[k][j]=='*') s[k][j]='.';
                        else break;
                    }
                    for(k=i+1;k<h;k++)
                    {
                        if(s[k][j]=='*') s[k][j]='.';
                        else break;
                    }
                    for(k=j-1;k>=0;k--)
                    {
                        if(s[i][k]=='*') s[i][k]='.';
                        else break;
                    }
                    for(k=j+1;k<w;k++)
                    {
                        if(s[i][k]=='*') s[i][k]='.';
                        else break;
                    }
                    break;
                }
            }
        }
        if(flag) break;
    }



    if(flag)
    {
        for(i=0;i<h;i++)
        {
            for(j=0;j<w;j++)
            {
                if(s[i][j]=='*')
                {
                    flag=0;
                    break;
                }
            }
        }
    }
    if(flag)
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}
