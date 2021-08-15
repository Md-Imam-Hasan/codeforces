#include <bits/stdc++.h>
#define ll long long
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

///Code starts from here
int main()
{
    fast_io;
    int t;
    cin>>t;

    while(t--)
    {
        ll n,a,b,c,i,j,k,cnt,r=0,p=0,s=0;
        cin>>n>>a>>b>>c;
        string sp,yn;
        cin>>sp;
        cnt=ceil(n/2.0);

        for(i=0;i<n;i++)
        {
            if(sp[i]=='R') p++;
            else if(sp[i]=='P') s++;
            else r++;
        }

        if(min(a,r)+min(b,p)+min(c,s)>=cnt)
            yn="YES";
        else yn="NO";

        if(yn=="NO") cout<<yn;
        else
        {
            cout<<yn<<endl;
            for(i=0;i<n;i++)
            {
                if(sp[i]=='R')
                {
                    if(b>0)
                    {
                        cout<<"P";
                        p--;
                        b--;
                    }
                    else if(a>r)
                    {
                        cout<<"R";
                        a--;
                    }
                    else if(c>s)
                    {
                        cout<<"S";
                        c--;
                    }
                }
                else if(sp[i]=='P')
                {
                    if(c>0)
                    {
                        cout<<"S";
                        s--;
                        c--;
                    }
                    else if(a>r)
                    {
                        cout<<"R";
                        a--;
                    }
                    else if(b>p)
                    {
                        cout<<"P";
                        b--;
                    }
                }
                else if(sp[i]=='S')
                {
                    if(a>0)
                    {
                        cout<<"R";
                        r--;
                        a--;
                    }
                    else if(b>p)
                    {
                        cout<<"P";
                        b--;
                    }
                    else if(c>s)
                    {
                        cout<<"S";
                        c--;
                    }
                }
            }
        }
        if(t) cout<<"\n";
    }

    return 0;
}

