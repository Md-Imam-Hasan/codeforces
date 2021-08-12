#include<iostream>
#include<string>

using namespace std;

int main()
{
    string s,t;
    cin>>s>>t;
    int s_lenght,t_length,i,j;
    s_lenght=s.length();
    t_length=t.length();

    for(i=0;i<s_lenght;i++)
    {
        if(s[i]==t[i])
            cout<<"0";
        else
            cout<<"1";
    }

    return 0;
}
