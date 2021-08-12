#include <bits/stdc++.h>
#define ll long long
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
const double pi =     2.0*acos(0.0);

using namespace std;

///Code starts from here
int main()
{
    fast_io;
    int t,kase=1;
    cin>>t;

    while(t--)
    {
        int n,i,j,k,x,y,x0,y0;
        cin>>n>>x>>y;
        j=n;
        x0=x;
        y0=y;
        vector<int>v;
        v.push_back(x);
        v.push_back(y);
        n--;
        k=y-x;
        for(i=1;i<=50;i++)
        {
            if(k%i==0&&k/i<=n)
                break;
        }
        while(1)
        {
            if(x+i<y)
            {
                v.push_back(x+i);
                x+=i;
            }
            else break;
        }
        while(v.size()<j)
        {
            if(x0-i>0)
            {
                v.push_back(x0-i);
                x0-=i;
            }
            else break;
        }
        while(v.size()<j)
        {
            v.push_back(y0+i);
            y0+=i;
        }

        for(auto a:v) cout<<a<<" ";
        cout<<endl;


    }

    return 0;
}
