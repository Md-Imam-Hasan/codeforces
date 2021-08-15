#include<iostream>
#include<string>

using namespace std;

int main()
{
    int X=0,n,i;
    cin>>n;

    string s;

    for(i=1;i<=n;i++)
    {
        cin>>s;
        if(s[1]=='+')
            X++;
        else
            X--;
    }

    cout<<X<<endl;

    return 0;
}
