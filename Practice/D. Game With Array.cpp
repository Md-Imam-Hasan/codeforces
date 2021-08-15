#include <bits/stdc++.h>
#define ll long long
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

///Code starts from here
int main()
{
    fast_io;
    ll n,s,i,j,k;
        cin>>n>>s;
        vector<int>v;

        if(n*2>s)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
            for(i=0;i<n;i++)
            {
                if(i==n-1)
                {
                    v.push_back(s);
                }
                else
                {
                    v.push_back(1);
                    s-=1;
                }
            }

            for(auto x:v)
            {
                cout<<x<<" ";
            }
            cout<<endl;
            cout<<n<<endl;
        }

    return 0;
}

