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
       int ones=0,zeros=0;

       for(int i=0;i<s.length();i++)
       {
           if(s[i]=='1') ones++;
            else zeros++;
       }
       int mx;
       mx=min(ones,zeros);
       if(mx%2==0)
       {
           cout<<"NET"<<endl;
       }
       else cout<<"DA"<<endl;
    }

    return 0;
}
