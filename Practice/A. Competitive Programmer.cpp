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
        ll n,i,j,k,sum=0,flag=0,flag1=0;

        for(i=0;i<s.length();i++)
        {
            j=s[i]-'0';
            sum+=j;
            if(j%2==0)
            {
                if(j>0) flag=1;
                else if(j==0&&flag1) flag=1;
            }
            if(j==0) flag1=1;
        }

        if(sum%3==0&&flag&&flag1)
        {
            cout<<"red"<<endl;
        }
        else  cout<<"cyan"<<endl;
    }

    return 0;
}

