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
        ll c,sum;
        cin>>c>>sum;
        if(c<sum)
        {
            if(sum%c==0)
            {
                cout<<c*(sum/c)*(sum/c)<<endl;
            }
            else
            {
                vector<ll>v(c,1);
                ll i=0,n=c;
                while(n<sum)
                {
                    n-=v[i];
                    v[i]++;
                    n+=v[i];
                    i=(i+1)%c;
                }
                ll value=0;
                for(i=0;i<c;i++)
                {
                    value+=(v[i]*v[i]);
                }
                cout<<value<<endl;
            }
        }
        else
        {
            cout<<min(c,sum)<<endl;
        }
    }

    return 0;
}

