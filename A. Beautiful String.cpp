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
        string s;
        cin>>s;
        int i,j,k;
        string p="abc";

        for(i=1;i<s.length();i++)
        {
            if(s[i]!='?'&&s[i]==s[i-1])
            {
                cout<<"-1"<<endl;
                goto A;
            }
        }
        if(s.length()==1)
        {
            cout<<"a"<<endl;
            goto A;
        }
        for(i=0;i<s.length();i++)
        {
            if(s[i]=='?'&&i==0)
            {
                if(s[i+1]=='?')
                {
                    s[i]='a';
                }
                else
                {
                    for(j=0;j<3;j++)
                    {
                        if(p[j]!=s[i+1])
                        {
                            s[i]=p[j];
                            break;
                        }
                    }
                }
            }
            else if(s[i]=='?'&&i==s.length()-1)
            {
                for(j=0;j<3;j++)
                {
                    if(p[j]!=s[i-1])
                    {
                        s[i]=p[j];
                        break;
                    }
                }
            }
            else if(s[i]=='?')
            {
                for(j=0;j<3;j++)
                {
                    if(p[j]!=s[i+1]&&p[j]!=s[i-1])
                    {
                        s[i]=p[j];
                        break;
                    }
                }
            }
        }

        cout<<s<<endl;
    }

    return 0;
}

