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
        ll n,i,j,k,flag=0;
        cin>>n;
        string s;
        cin>>s;
        string a="",b="";

        for(i=0;i<n;i++)
        {
            if(s[i]=='2'&&!flag)
            {
                a+='1';
                b+='1';
            }
            else if(s[i]=='0')
            {
                a+='0';
                b+='0';
            }
            else if(s[i]=='1'&&!flag)
            {
                flag=1;
                a+='1';
                b+='0';
            }
            else if(s[i]=='2'&&flag)
            {
                a+='0';
                b+='2';
            }
            else if(s[i]=='1'&&flag)
            {
                a+='0';
                b+='1';
            }
        }

        cout<<a<<endl;
        cout<<b<<endl;
    }

    return 0;
}

