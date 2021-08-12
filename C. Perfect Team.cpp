#include <bits/stdc++.h>
#define ll long long
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

///Code starts from here
int main()
{
    fast_io;
    int t;
    cin>>t;

    while(t--)
    {
        ll c,m,x,i,j,k;
        cin>>c>>m>>x;

        if(c==0||m==0)
        {
            cout<<"0";
        }
        else
        {
            k=min(c,min(m,x));
            c-=k;
            m-=k;
            x-=k;
            if(c==0||m==0)
            {
                cout<<k;
            }
            else
            {
                if(min(c,m)*2<=max(c,m))
                cout<<k+min(c,m);
                else
                {
                    cout<<k+(c+m)/3;
                }
            }
        }
        if(t) cout<<"\n";
    }

    return 0;
}

