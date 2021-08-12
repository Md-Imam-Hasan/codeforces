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
        ll n,i,j,k,ones=0,zeros=0;
        cin>>n;
        string s;
        cin>>s;
        char c=s[n-1];
        string p=s.substr(0,n-1);

        for(i=0;i<n;i++)
        {
            if(s[i]=='1') ones++;
            else zeros++;
        }
        if(ones==zeros)
        {
            cout<<"2"<<endl;
            cout<<p<<" "<<c<<endl;
        }
        else cout<<"1\n"<<s<<endl;

    }

    return 0;
}
