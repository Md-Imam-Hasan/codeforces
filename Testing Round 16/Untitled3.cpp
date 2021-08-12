#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        ll i,j,k,x,y,time=0;
        x=y=0;
        string p;
        cin>>p;
        set<pair<int,int>>mp;
        mp.insert(make_pair(0,0));

        for(i=0;i<p.length();i++)
        {
            j=x,k=y;
            cout<<"1st "<<j<<" "<<k<<endl;
            if(p[i]=='E')
            {
                x++;
            }
            else if(p[i]=='N')
            {
                y++;
            }
            else if(p[i]=='W')
            {
                x--;
            }
            else if(p[i]=='S')
            {
                y--;
            }
            cout<<"2nd "<<j+x<<" "<<k+y<<endl;
            if(!mp.count({j+x,k+y}))
                {
                    time+=5;
                    mp.insert({j+x,k+y});
                }
                else time++;
        }

        cout<<time;

        if(t) cout<<"\n";
    }

    return 0;
}

