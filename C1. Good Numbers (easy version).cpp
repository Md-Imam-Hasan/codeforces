#include <bits/stdc++.h>
#define ll long long
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

///Code starts from here
int main()
{
    fast_io;
    int t;
    cin>>t;

    while(t--)
    {
        ll n,i,j,k;
        cin>>n;
        bool tf=true;

        while(true)
        {
            k=n;
            tf=true;
            while(k>0)
            {
                if(tf&&k%3==2)
                    tf=false;
                k/=3;
            }
            if(tf) break;
            n++;
        }
        cout<<n;
        if(t) cout<<"\n";
    }

    return 0;
}
