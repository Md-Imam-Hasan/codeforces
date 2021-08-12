#include <bits/stdc++.h>
#define ll long long
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
const double pi =     2.0*acos(0.0);

using namespace std;

///Code starts from here
int main()
{
    fast_io;
    int t,kase=1;
    cin>>t;

    while(t--)
    {
        string s;
        ll n,i,j,k,x,flag=1;
        cin>>s>>x;
        n=s.length();

        vector<int>w(n,1);
        ///for(auto v:w) cout<<v;

        for(i=0;i<n;i++)
        {
            if(s[i]=='0')
            {
                if(i+x<n) w[i+x]=0;
                if(i-x>=0) w[i-x]=0;
            }
        }
        bool ok=1;
        for(i=0;i<n;i++)
        {
            if(s[i]=='1')
            {
                if(i-x>=0&&w[i-x]==0&&i+x<n&&w[i+x]==0)
                {
                        flag=1;
                }
                else
                {
                    flag=0;
                    break;
                }
            }
        }
        if(!flag) cout<<"-1"<<endl;
        else
        {
            for(i=0;i<n;i++)
                cout<<w[i];
            cout<<endl;
        }


    }

    return 0;
}
