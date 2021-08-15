#include<iostream>
#include<string>

using namespace std;

int main()
{
    string s,t;
    cin>>s;
    int s_length,t_length,i,j,k,value=0;
    s_length=s.length();

    for(i=0,k=0;i<s_length;i++)
    {
        value=0;
        for(j=i+1;j<s_length;j++)
        {
            if(s[j]==s[i])
            {
                value++;
            }
        }

        if(value==0)
        {
            t[k]=s[i];
            k++;
        }
    }

    if(k%2==0)
        cout<<"CHAT WITH HER!"<<endl;
    else
        cout<<"IGNORE HIM!"<<endl;

    return 0;
}
