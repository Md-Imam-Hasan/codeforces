#include <bits/stdc++.h>
#define ll long long
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
const double pi =     2.0*acos(0.0);

using namespace std;

///Code starts from here
int main()
{
    fast_io;
    int t=1,kase=1;


    while(t--)
    {
        ll n,i,j,k,op=0,clo=0;
        cin>>n;
        string s;
        cin>>s;
        bool ok=0;
        if(n%2)
        {
            cout<<":("<<endl;
        }
        else
        {
            for(i=0;i<n;i++)
            {
                if(s[i]=='(') op++;
                else if(s[i]==')') clo++;
            }
            for(i=0;i<n;i++)
            {
                if(op>=n/2) break;
                else if(s[i]=='?')
                {
                    s[i]='(';
                    op++;
                }
            }
            for(i=0;i<n;i++)
            {
                if(clo>=n/2) break;
                else if(s[i]=='?')
                {
                    s[i]=')';
                    clo++;
                }
            }
            op=0;
            for(i=0;i<n;i++)
            {
                if(s[i]=='(') op++,ok=1;
                else if(s[i]==')'&&ok) op--;
                if(op==0&&i>0&&i<n-1)
                {
                    op=-1;
                    break;
                }
            }

            ///cout<<s<<endl;
            if(op==0) cout<<s<<endl;
            else cout<<":("<<endl;
        }
    }

    return 0;
}

