#include<iostream>
#include<string>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int Length,i,j,temp=0;
    Length=s.length();

    if(Length<7)
        cout<<"NO"<<endl;
    else
    {

    for(i=0;i<Length;i++)
    {
        if(temp==7)
            break;
         else if((s[i]-'0')==0)
        {
            temp=0;
            for(j=i;j<=Length&&(s[j]-'0')==0;j++)
            {
                temp++;
            }
        }
        else if((s[i]-'0')==1)
        {
            temp=0;
            for(j=i;j<=Length&&(s[j]-'0')==1;j++)
            {
                temp++;
            }
        }
    }
    (temp>=7)?cout<<"YES"<<endl:cout<<"NO"<<endl;
    }
    return 0;
}
