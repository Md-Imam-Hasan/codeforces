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

    A:
    while(t--)
    {
        ll l,r,m,i,j,k;
        cin>>l>>r>>m;
        ll a,b,c;

        for(a=l;a<=r;a++)
        {
            if(((((m/a)+1)*a)-m)<=(r-l))
            {
                j=(((m/a)+1)*a-m);
                b=l;
                c=l+j;
                cout<<a<<" "<<b<<" "<<c<<endl;
                break;
            }
            else if(m%a<=(r-l)&&(m/a)>=1)
            {
                j=m%a;
                b=r;
                c=r-j;
                cout<<a<<" "<<b<<" "<<c<<endl;
                break;
            }
        }
    }

    return 0;
}
