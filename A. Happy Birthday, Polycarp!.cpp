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
        int n,i=0,j,k=0,l=1;
        cin>>n;
        j=n;
        while(n>0)
        {
            n/=10;
            i++;
            k*=10;
            k+=l;
        }
        int ans=9*(i-1);
        ans+=(j/k);

        cout<<ans<<endl;
    }

    return 0;
}
