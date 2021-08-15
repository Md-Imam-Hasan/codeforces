#include <bits/stdc++.h>
#define ll long long

using namespace std;

///Code starts from here
int main()
{
    int n,i;
    cin>>n;
    double sum=0;

    for(i=1;i<=n;i++)
        sum+=(1.0/i);
    cout<<fixed<<setprecision(7)<<sum<<endl;


    return 0;
}
