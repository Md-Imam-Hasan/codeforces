#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,m,x,y,i,j,k,sum=0;
        cin>>n>>m>>x>>y;
        string a[n];

        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }

        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(a[i][j]=='.'&&a[i][j+1]=='.')
                {
                    if(x*2<y)
                    {
                        sum+=x*2;
                    }
                    else sum+=y;
                    j++;
                }
                else if(a[i][j]=='.'&&a[i][j+1]!='.')
                {
                    sum+=x;
                }
            }
        }
        cout<<sum;
        if(t) cout<<"\n";
    }

    return 0;
}

