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
        ll n,i,j,k,flag0=0,flag1=0;
        cin>>n;
        string a,b;
        cin>>a>>b;
        vector<ll>v;

        for(i=0;i<a.length();i++)
        {
            if(a[i]=='0')
            {
                if(!flag0)
                {
                    flag0=1;
                }
                if(flag1)
                {
                    v.push_back(i);
                    ///cout<<"Execute1"<<endl;
                    flag1=0;
                }
            }
            else if(a[i]=='1')
            {
                if(!flag1)
                {
                    flag1=1;
                }
                if(flag0)
                {
                    v.push_back(i);
                    ///cout<<"Execute2"<<endl;
                    flag0=0;
                }
            }
        }
        if(!flag0&&b[n-1]=='0') v.push_back(i);
        ///cout<<"Execute3"<<endl;
        else if(flag0&&b[n-1]=='1') v.push_back(i);
        flag0=0;
        flag1=0;

        for(i=n-1;i>=0;i--)
        {
            if(b[i]=='0')
            {
                if(!flag0)
                {
                    flag0=1;
                }
                if(flag1)
                {
                    v.push_back(i+1);
                    ///cout<<"Execute4"<<endl;
                    flag1=0;
                }
            }
            else if(b[i]=='1')
            {
                if(!flag1)
                {
                    flag1=1;
                }
                if(flag0)
                {
                    v.push_back(i+1);
                    ///cout<<"Execute5"<<endl;
                    flag0=0;
                }
            }
        }
        if(a==b)
        {
            cout<<"0";
            if(t) cout<<"\n";
            goto A;

        }
        if(n==1)
        {
            cout<<"1 1";
            if(t) cout<<"\n";
            goto A;
        }
        cout<<v.size()<<" ";
        if(v.size())
        {
            for(auto x:v)
            {
                cout<<x<<" ";
            }
        }

        if(t) cout<<"\n";
    }

    return 0;
}
