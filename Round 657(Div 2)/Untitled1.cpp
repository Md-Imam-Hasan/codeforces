#include <bits/stdc++.h>
#define ll long long
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

///Code starts from here

int value(string p)
{
    int cnt=0,i;
    for(i=0;i<p.length()-6;i++)
    {
        if(p.substr(i,7)=="abacaba")
            cnt++;
    }
    if(cnt==1) return 1;
    else return 0;
}
int main()
{
    fast_io;
    int x;
    cin>>x;

    while(x--)
    {
        int n,flag=0,i,j,k;
        cin>>n;
        string s,t="abacaba",s1;
        cin>>s;

        for(i=0;i<n-6;i++)
        {
            s1=s;
            for(j=0;j<7;j++)
            {
                if(s1[i+j]=='?')
                    s1[i+j]=t[j];
            }
            for(j=0;j<n;j++)
            {
                if(s1[j]=='?')
                    s1[j]='z';
            }

            if(value(s1))
            {
                cout<<"YES"<<endl;
                cout<<s1;
                flag=1;
                break
                ;
            }
        }
        if(!flag) cout<<"NO";

        if(x) cout<<"\n";
    }

    return 0;
}
