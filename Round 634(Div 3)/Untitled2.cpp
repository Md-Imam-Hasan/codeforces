#include <bits/stdc++.h>
#define ll long long

using namespace std;

///Code starts from here
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        ll n,a,b,i,j,k;
        cin>>n>>a>>b;
        string s="";
        for(i=0;i<n;)
        {
        for(char c='a';c<('a'+b)&&i<n;c++)
        {
            s+=c;
            i++;
        }
        }
        cout<<s;
        if(t) cout<<"\n";
    }

    return 0;
}
