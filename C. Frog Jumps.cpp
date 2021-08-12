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
        string s;
        cin>>s;
        int i;
        vector<int>v;
        int mx=0;
        v.push_back(0);

        for(i=0;i<s.length();i++)
        {
            if(s[i]=='R') v.push_back(i+1);
        }
        v.push_back(s.length()+1);

        for(i=1;i<v.size();i++)
        {
            mx=max(mx,v[i]-v[i-1]);
        }
        cout<<mx<<endl;

    }

    return 0;
}

