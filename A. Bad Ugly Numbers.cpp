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
        int n,i;
        cin>>n;
        if(n==1)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            cout<<"2";
            for(i=2;i<=n;i++) cout<<"3";
            cout<<endl;
        }

    }

    return 0;
}

