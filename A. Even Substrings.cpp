#include <bits/stdc++.h>
#define ll long long
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
const double pi = 2.0*acos(0.0);

using namespace std;

///Code starts from here
int main()
{
    fast_io;
    int t=1,kase=1;


    while(t--)
    {
        ll n,i,j,k=0;
        string s;
        cin>>n>>s;

        for(i=0;i<n;i++)
        {
            if((s[i]-'0')%2==0)
            {
                k+=(i+1);
            }
        }
        cout<<k<<endl;
    }

    return 0;
}

