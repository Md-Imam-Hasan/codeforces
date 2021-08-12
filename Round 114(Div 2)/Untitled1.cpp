#include <bits/stdc++.h>
#define ll long long

using namespace std;

///Code starts from here
int main()
{
    double n,x,y;
    cin>>n>>x>>y;

    int i=ceil(n*(y/100));
    int j=i-x;
    if(j>=0) cout<<j<<endl;
    else cout<<"0"<<endl;

    return 0;
}
