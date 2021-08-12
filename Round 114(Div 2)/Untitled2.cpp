#include <bits/stdc++.h>
#define ll long long

using namespace std;

///Code starts from here
int main()
{
    string s;
    int i,j,k,flag=1;

    while(getline(cin,s))
    {
        for(i=0;i<s.length();i++)
            if(s[i]!=' ') break;
        if(s[i]=='#')
        {
            if(!flag)
                cout<<endl;
            cout<<s<<endl;
            flag=1;
        }
        else
        {
            for(i=0;i<s.length();i++)
            {
                if(s[i]!=' ') cout<<s[i];
            }
            flag=0;
        }
    }
    if(!flag) cout<<endl;

    return 0;
}
