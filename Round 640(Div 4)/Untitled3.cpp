#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        ll n,i,j,k;
        cin>>n>>k;
        cout<<k+(k-1)/(n-1);
        if(t) cout<<"\n";
    }

    return 0;
}

