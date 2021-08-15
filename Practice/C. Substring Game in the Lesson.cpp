#include <bits/stdc++.h>
#define ll long long
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

///Code starts from here
int main()
{
    fast_io;
    string s;
    cin>>s;
    char c=s[0];

    for(int i=0;i<s.length();i++)
    {
        c=min(c,s[i]);
        if(s[i]==c)
            cout<<"Mike"<<endl;
        else cout<<"Ann"<<endl;
    }

    return 0;
}

