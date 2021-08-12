#include <bits/stdc++.h>
#define ll long long

using namespace std;
char s[12][12][12];
int k,n,m,x,y,h,i,j,ans=0;

void time(int x,int y,int z)
{
    if(s[x][y][z]=='.')
    {
        ans++;
        s[x][y][z]='#';
        if(x>1) time(x-1,y,z);
        if(x<k) time(x+1,y,z);
        if(y>1) time(x,y-1,z);
        if(y<n) time(x,y+1,z);
        if(z>1) time(x,y,z-1);
        if(z<m) time(x,y,z+1);
    }
    else return;
}

///Code starts from here
int main()
{
    cin>>k>>n>>m;

    for(i=1;i<=k;i++)
        for(j=1;j<=n;j++)
            for(h=1;h<=m;h++)
                cin>>s[i][j][h];
    cin>>x>>y;

    time(1,x,y);
    cout<<ans<<endl;

    return 0;
}
