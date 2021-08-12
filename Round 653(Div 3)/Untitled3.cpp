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
        ll n,i,j,k;
        cin>>n;
        string s;
        cin>>s;
        int open=0,close=0,flag=0;

        for(i=0;i<n;i++)
        {
            if(s[i]=='(')
            {
                open++;
                flag=1;
            }
            else if(s[i]==')')
            {
                close++;
            }
            if(s[i]==')')
            {
                if(flag)
                {
                    open--;
                    close--;
                    if(open==0) flag=0;
                }
            }

        }
        cout<<open<<endl;
    }

    return 0;
}
