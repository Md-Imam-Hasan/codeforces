#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d,e,f;
    cin>>a>>b>>c>>d>>e>>f;

    int value=0;
    if(f>=e)
    {
        int x=min(min(b,c),d);
        value+=x*f;
        int y=min((d-x),a);
        value+=y*e;
        cout<<value<<endl;
    }
    else
    {
        int x=min(a,d);
        value+=x*e;
        int y=min(min((d-x),b),c);
        value+=y*f;
        cout<<value<<endl;
    }

    return 0;

}
