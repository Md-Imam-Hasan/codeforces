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
        ll n,i,j,k,x,flag=0;
        string s,p,ans;
        cin>>n>>s;
        ans=s;
        ll a[9];

        for(i=0;i<9;i++)
        {
            cin>>a[i];
            if(a[i]>i+1) flag=1;
        }

        if(flag){
        for(i=0;i<n;i++)
        {
            p=s;
            for(j=i;j<n;j++)
            {
                x=p[j]-'0';
                if(j==n-1)
                {
                    i=j;
                }
                ///cout<<x<<" "<<j<<endl;
                if(x<=a[x-1])
                {
                    x=a[x-1];
                    p[j]=x+'0';
                }
                else
                {
                    i=j;
                    break;
                }
            }
            ans=max(ans,p);
        }
        }
        cout<<ans<<endl;
        /*cout<<"Case "<<kase<<": "<<ans<<endl;
        kase++;
        if(t) cout<<"\n";*/
    }

    return 0;
}

