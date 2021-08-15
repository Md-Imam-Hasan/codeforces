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
        ll n,i,j,k,a,b,c,x,y,z;
        cin>>a>>b>>c;
        n=min(a/3,min(b/2,c/2));
        ///cout<<n<<endl;
        ll sum=n*7;
        a-=(n*3);
        b-=(n*2);
        c-=(n*2);

        string s="FFRCFCRFFRCFC";
        ll cnt,ans=INT_MIN;
        for(i=0;i<7;i++)
        {
            x=a,y=b,z=c;
            cnt=0;
            for(j=i;j<7+i;j++)
            {
                if(s[j]=='F'&&x)
                {
                    cnt++;
                    x--;
                }
                else if(s[j]=='R'&&y)
                {
                    cnt++;
                    y--;
                }
                else if(s[j]=='C'&&z)
                {
                    cnt++;
                    z--;
                }
                else break;
            }
            ///cout<<"CNT "<<cnt<<endl;
            ans=max(ans,cnt);
        }
        cout<<sum+ans<<endl;
    }

    return 0;
}

