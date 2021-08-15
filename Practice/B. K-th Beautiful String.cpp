#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,k;
        cin>>n>>k;
        string s(n,'a');

        int i=2;
        while(k>i-1)
        {
            k-=(i-1);
            i++;
        }

        s[n-i]='b';
        s[n-k]='b';

        cout<<s<<endl;
    }
}
