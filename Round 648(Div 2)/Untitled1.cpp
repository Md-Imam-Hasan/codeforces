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
        ll n,m,i,j,k,turn=0,ones=0;
        cin>>n>>m;
        int x,y;
        x=n,y=m;
        int a[n][m];
        bool p[n],q[m];
        memset(p,true,sizeof(p));
        memset(q,true,sizeof(q));
        ///vector<pair<int,int>>v;

        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                cin>>a[i][j];
                if(a[i][j]==1)
                {
                    p[i]=false;
                    q[j]=false;
                }
            }
        }
        //for(i=0;i<n;i++) cout<<p[i]<<endl;
        //for(i=0;i<m;i++) cout<<q[i]<<endl;

        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(a[i][j]==0&&p[i]==true&&q[j]==true)
                {
                    turn++;
                    p[i]=false;
                    q[j]=false;
                    //cout<<"Turn "<<turn<<endl;
                }
            }
        }


        k=turn;
        if(k%2==0)
        {
            cout<<"Vivek";
        }
        else
        {

                cout<<"Ashish";

        }

        if(t) cout<<"\n";
    }

    return 0;
}

