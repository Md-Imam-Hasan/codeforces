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


    A:
    while(t--)
    {
        ll n,i,j,k=0,flag=0;
        cin>>n;
        ll a[n];
        string s="",p;
        char c='a';

        ///cout<<s.length()<<endl;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            k=max(k,a[i]);
        }

        if(k==0)
        {
            for(i=0;i<=n;i++)
            {
                if(c=='z') c='a';
                cout<<c<<endl;
                c++;
            }
            goto A;
        }
        else
        {
            for(i=0;i<k;i++)
            {
                s+='a';
            }
            cout<<s<<endl;
            for(i=0;i<n;i++)
            {
                p=s.substr(0,a[i]);
                for(j=a[i];j<k;j++)
                {
                    if(s[a[i]]=='b') p+='a';
                    else p+='b';
                }
                cout<<p<<endl;
                s=p;
            }
        }
    }

    return 0;
}

