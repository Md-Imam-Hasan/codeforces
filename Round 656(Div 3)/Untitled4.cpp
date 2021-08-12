#include <bits/stdc++.h>
#define ll long long
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;
string s;

///Code starts from here

int moves(int x, int y, char c)
{
    if(x+1==y)
        return (s[x]!=c);
    else
    {
        int mid=(x+y)/2;
        int i,cnt1=0,cnt2=0;
        for(i=x;i<mid;i++)
        {
            if(s[i]!=c)
            {
                cnt1++;
            }
        }
        for(i=mid;i<y;i++)
        {
            if(s[i]!=c)
            {
                cnt2++;
            }
        }

        return min(cnt1+moves(mid,y,c+1),cnt2+moves(x,mid,c+1));
    }
}
int main()
{
    fast_io;
    int t;
    cin>>t;

    while(t--)
    {
        ll n,i,j,k;
        cin>>n;

        cin>>s;

        cout<<moves(0,n,'a');
        if(t) cout<<"\n";
    }

    return 0;
}
