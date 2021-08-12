#include <bits/stdc++.h>
#define ll long long
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
const double pi = 2.0*acos(0.0);

using namespace std;

///Code starts from here
int main()
{
    fast_io;
    int t=1,kase=1;


    while(t--)
    {
        ll n,i,j,k,o=0,z=0;
        cin>>n;
        ll a[n];

        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]) o++;
            else z++;
        }
        for(i=0;i<n;i++)
        {
            if(a[i]) o--;
            else z--;
            if(!o) break;
            else if(!z) break;
        }
        cout<<i+1<<endl;

    }

    return 0;
}

