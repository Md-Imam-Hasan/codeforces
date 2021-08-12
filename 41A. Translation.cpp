#include<iostream>
#include<string>

using namespace std;

int main()
{
    string s,t;
    cin>>s>>t;
    int s_length,t_length,i,j,value=0;
    s_length=s.length();
    t_length=t.length();

    if(s_length!=t_length)
    {
        cout<<"NO"<<endl;
        return 0;
    }

    for(i=0,j=t_length-1;i<s_length&&j>=0;i++,j--)
    {
        if(s[i]==t[j])
        {
            value=0;
        }
        else
        {
            value++;
            break;
        }
    }

    if(value==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
