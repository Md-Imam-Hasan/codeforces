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
        ll n,i,j,k=0,l=1;
        cin>>n;
        int a[n+1];
        bool b[2*n+1];
        memset(b,false,sizeof(b));
        vector<int>v;

        for(i=1;i<=n;i++)
        {
            cin>>a[i];
            b[a[i]]=true;
            if(a[i]==2*n)
            {
                k=1;
            }
            if(a[i]==1)
            {
                l=0;
            }
        }
        if(k)
        {
            cout<<"-1"<<endl;
            goto A;
        }
        if(l)
        {
            cout<<"-1"<<endl;
            goto A;
        }

        for(i=1;i<=n;i++)
        {
            v.push_back(a[i]);
            for(j=a[i];j<=2*n;j++)
            {
                if(!b[j])
                {
                    v.push_back(j);
                    b[j]=true;
                    break;
                }
            }
        }

        if(v.size()<2*n)
        {
             cout<<"-1"<<endl;
            goto A;
        }
        for(i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
        }
        if(t) cout<<"\n";
    }

    return 0;
}

