#include <bits/stdc++.h>
#define ll long long

using namespace std;

///Code starts from here
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        ll value=9,temp=9,i=1;

        while(value<=b)
        {
            temp*=10;
            value+=temp;
            i++;
        }

        cout<<a*(i-1)<<endl;
    }

    return 0;
}

