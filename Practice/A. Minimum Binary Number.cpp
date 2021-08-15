#include<iostream>
#include<string>

using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int i,j,temp=0,value;

    if(n==1)
    {
        cin>>s[0];
        cout<<s[0]<<endl;
        return 0;
    }

    for(i=0;i<n;i++)
    {
        //cin>>s[i];
        if(s[i]=='1')
            temp++;
    }

    value=n-(temp-1);

    for(j=0;j<value;j++)
    {
        if(j==0)
        {
            s[j]='1';
            cout<<s[j];
        }
        else
        {
            s[j]='0';
            cout<<s[j];
        }
    }

    return 0;

}
