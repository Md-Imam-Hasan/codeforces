#include <bits/stdc++.h>
#define ll long long

using namespace std;

///Code starts from here
int main()
{
    int t;
    cin>>t;

    A:
    while(t--)
    {
        ll n,i,j=0,k,x,mx=0;
        cin>>n;
        int s[n];
        bool a[1025];
        memset(a,false,sizeof(a));

        for(i=0;i<n;i++)
        {
            cin>>s[i];
            if(mx<s[i]) mx=s[i];
            a[s[i]]=true;
        }


        for(k=1;k<1024;k++)
        {
            for(i=0;i<n;i++)
            {
                x=s[i]^k;
                //cout<<x<<endl;
                if(a[x]==true) continue;
                else break;
            }
            if(i==n)
            {
                j=1;
                break;
            }
        }
        if(j==1) cout<<k;
        else cout<<"-1";
        if(t) cout<<"\n";
    }

    return 0;
}

