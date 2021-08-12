#include<iostream>
#include<string>

using namespace std;

int main()
{
    int i,Length;
    string p;
    cin>>p;
    Length=p.length();

    for(i=0;i<Length;i++)
    {
        if(p[i]=='H'||p[i]=='Q'||p[i]=='9')
        {
            cout<<"YES"<<endl;
            return 0;
        }

    }

    cout<<"NO"<<endl;

    return 0;
}
