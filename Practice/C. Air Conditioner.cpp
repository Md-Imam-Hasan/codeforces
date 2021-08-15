#include <bits/stdc++.h>
#define ll long long
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
const double pi =     2.0*acos(0.0);

using namespace std;

///Code starts from here
int main()
{
    fast_io;
    int q,kase=1;
    cin>>q;

    while(q--)
    {
        ll n,i,j,k=0,r,t,l,h,t1,l1,h1;
        cin>>n>>m;
        bool ok=1;
        cin>>t>>l>>h;
        n--;
        while(n--)
        {
            cin>>t1>>l1>>h1;
            if(l>=h1&&ok)
            {
                r=t-k;
                if(m>=l&&ok)
                {
                    m-=(min(abs(m-l),r));
                }
                else if(m<l&&ok)
                {
                    m+=(min(abs(m-l),r));
                }
                if(l<=m&&h>=m&&ok)
                {
                    ok=1;
                }
                else ok=0;
            }
            else if(h<=l1)
            {

            }
        }

    }

    return 0;
}

