#include <bits/stdc++.h>
#define ll long long
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
const double pi =     2.0*acos(0.0);

using namespace std;

///Code starts from here
int main()
{
    fast_io;
    int t=1,kase=1;


    while(t--)
    {
        ll n,i,j,k=0,pls=0,mins=0;
        cin>>n;
        string s;
        cin>>s;

        for(i=0;i<n;i++)
        {
            if(s[i]=='+') k++;
            else
            {
                if(k) k--;
            }
        }
        cout<<k<<endl;

    }

    return 0;
}

