
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
        j=n/2;
        count=0;

        if(j%2!=0)
        {
            cout<<"NO";
        }
        else
        {
            cout<<"YES"<<endl;
            for(i=1;i<=n/2;i++)
            {
                q=2*i;
                count+=q;
                cout<<q;
                if(i!=n/2) cout<<" ";
            }
            for(i=1;i<=n/2;i++)
            {
                q=(2*i)-1;
                if(i==n/2)
                    cout<<" "<<count;
                else cout<<" "<<q;
                count-=q;
            }
        }

        if(t) cout<<endl;


    }

    return 0;
}

