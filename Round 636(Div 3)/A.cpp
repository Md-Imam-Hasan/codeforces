
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin>>t;
    ll n,q,i,j,count;

    while(t--)
    {
        cin>>n;
        j=0;

        for(i=1;i<=n;i++)
        {
            j+=pow(2.0,(i-1));
            if(n%j==0)
            {
                q=n/j;
                if(i>1)
                    break;
            }
        }

        cout<<q;
        if(t) cout<<endl;


    }

    return 0;
}
