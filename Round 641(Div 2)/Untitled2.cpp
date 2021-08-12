#include <bits/stdc++.h>
#define ll long long

using namespace std;
int n;
int a[100002],b[100002];

int fun(int x)
{
    if(x>n) return 0;
    if(b[x]!=-1) return b[x];
    int cnt=0;
    for(int i=2*x;i<=n;i+=x)
    {
        if(a[i]>a[x])cnt=max(cnt,1+fun(i));
    }
    return b[x]=cnt;

}

///Code starts from here
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int i,j,k;
        cin>>n;


        for(i=1;i<=n;i++)
        {
            cin>>a[i];
            b[i]=-1;
        }
        int mx=0;
        for(i=1;i<=n;i++)
        {
            mx=max(mx,1+fun(i));
        }

        cout<<mx;
        if(t) cout<<"\n";
    }

    return 0;
}
