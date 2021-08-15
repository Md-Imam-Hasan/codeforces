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
    ///cin>>t;

    while(t--)
    {
        ll n,i,j=0,k,x,y,p;
        cin>>n;
        string s[5]={"aeiou","eioua","iouae","ouaei","uaeio"};
        string s1;

        for(i=5;i*i<=n;i++)
        {
            if(n%i==0)
            {
                j=n/i;
                break;
            }
        }
        if(j>=5)
        {
            for(x=1;x<=i;x++)
            {
                if(x<6)
                {
                    s1=s[x-1];
                    cout<<s1;
                }
                else
                {
                    cout<<s1;
                }
                for(y=6;y<=j;y++)
                {
                    cout<<s1[4];
                }
            }
            cout<<endl;
        }
        else cout<<"-1"<<endl;
    }

    return 0;
}

