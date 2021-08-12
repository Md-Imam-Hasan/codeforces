#include <bits/stdc++.h>
#define ll long long
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
const double pi =     2.0*acos(0.0);

using namespace std;

///Code starts from here
int main()
{
    fast_io;
    int n,i,j,k=0,ans=0;
    string a,b;
    cin>>a>>b;
    for(i=0;i<b.length();i++)
    {
        if(a[i]!=b[i]) k++;
    }
    if(k%2==0) ans++;
    for(i=b.length();i<a.length();i++)
    {
        if(a[i]!=a[i-b.length()]) k++;
        if(k%2==0) ans++;
    }
    printf("%d",ans);
    return 0;
}

