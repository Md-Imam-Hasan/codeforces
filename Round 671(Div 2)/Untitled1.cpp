#include <bits/stdc++.h>
#define ll long long
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
const double pi = 2.0*acos(0.0);

using namespace std;

///Code starts from here
int main()
{
    fast_io;
    int t,kase=1;
    cin>>t;

    while(t--)
    {
        int n,i,j,k,x=0,y=0,p;
        cin>>n;
        string s;
        cin>>s;

        for(i=0;i<n;i++)
        {
            p=s[i]-'0';
            if((i+1)%2&&p%2) x++;
            else if((i+1)%2==p%2) y++;
        }
        if(n==1)
        {
            p=s[0]-'0';
            if(p%2) p=1;
            else p=2;
        }
        else if(n%2)
        {
            if(x) p=1;
            else p=2;
        }
        else
        {
            if(y) p=2;
            else p=1;
        }
        cout<<p<<endl;
    }

    return 0;
}

