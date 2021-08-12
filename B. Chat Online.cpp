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
        int n,i,j,k,p,q,l,r,x,y,ans=0,f;
        cin>>p>>q>>l>>r;
        bool a[2001],b[2001];
        memset(a,0,sizeof(a));
        memset(b,0,sizeof(b));

        for(i=l;i<=r;i++) b[i]=1;

        for(i=0;i<p;i++)
        {
            cin>>x>>y;
            for(j=x;j<=y;j++)
            {
                a[j]=1;
            }
        }

        for(i=0;i<q;i++)
        {
            cin>>x>>y;
            for(j=l;j<=r;j++)
            {
                //cout<<"ok"<<endl;
                if(b[j]&&a[y+j])
                {
                    ans++;
                    b[j]=0;
                }
                else if(b[j]&&a[x+j])
                {
                    ans++;
                    b[j]=0;
                }
                else
                {
                    for(f=j+x;f<=j+y;f++)
                    {
                        if(a[f]&&b[j])
                        {
                            ans++;
                            b[j]=0;
                            break;
                        }
                    }
                }
            }
            ///cout<<ans<<endl;
        }

        cout<<ans<<endl;
    }

    return 0;
}

