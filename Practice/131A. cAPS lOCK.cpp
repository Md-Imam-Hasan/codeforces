#include<iostream>
#include<string>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int s_length,i;
    s_length=s.length();

    if(s[0]>=65&&s[0]<=90)
    {
        s[0]=s[0];
        cout<<s[0];
    }
    else
        {
            s[0]=s[0]-32;
            cout<<s[0];
        }

    for(i=1;i<s_length;i++)
    {
        if(s[i]>=65&&s[i]<=90)
        {
            s[i]=s[i]+32;
            cout<<s[i];
        }
        else
        {
            s[i]=s[i];
            cout<<s[i];
        }

    }

    return 0;
}
