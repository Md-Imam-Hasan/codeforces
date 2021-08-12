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
        string b,a;
        cin>>b;
        int i,j,k,l;

        cout<<b[0];

        for(i=1;i<b.length()-1;i++)
        {
            if(i%2!=0) cout<<b[i];
        }
        l=b.length();
        cout<<b[l-1];
        if(t) cout<<"\n";
    }

    return 0;
}
