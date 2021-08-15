#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    string s,t;
    cin>>s>>t;
    int length,i,j,k,v=0;
    length=s.length();

    for(i=0;i<length;i++)
    {
        if(s[i]-'0'==t[i]-'0'||s[i]-'0'==(t[i]-'0')+22||s[i]-'0'==(t[i]-'0')-22)
        {
            v=0;
        }
        else if(s[i]-'0'>t[i]-'0'||s[i]-'0'>(t[i]-'0')+22||s[i]-'0'>(t[i]-'0')-22)
        {
            cout<<"-1"<<endl;
            return 0;
        }
        else if(s[i]-'0'<t[i]-'0'||s[i]-'0'<(t[i]-'0')+22||s[i]-'0'<(t[i]-'0')-22)
        {
            cout<<"1"<<endl;
            return 0;
        }
    }

    cout<<"0"<<endl;


    return 0;

}
