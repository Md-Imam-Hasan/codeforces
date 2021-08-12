#include <bits/stdc++.h>
#define ll long long

using namespace std;

///Code starts from here
int main()
{
    int n;
    cin>>n;
    int i,j,k=1;
    map<string,int>mp;
    string s;

    for(i=0;i<n;i++)
    {
        cin>>s;
        if(mp[s]==0)
        {
            cout<<"OK"<<endl;
            mp[s]++;
        }
        else if(mp[s]>0)
        {
            cout<<s<<mp[s]<<endl;
            mp[s]++;
        }
    }

    return 0;
}

