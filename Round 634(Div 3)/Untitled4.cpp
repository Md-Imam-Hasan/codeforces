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
        int i,j,k,x;
        string s[9];
        char c;
        for(i=0;i<9;i++)
        {
            cin>>s[i];
        }

        for(i=0;i<9;i++)
        {
           for(j=0;j<9;j++)
           {
               if(s[i][j]=='2') s[i][j]='1';
           }
        }

        for(i=0;i<9;i++)
        {
            cout<<s[i];
            cout<<endl;
        }
    }

    return 0;
}

