#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        ll n,i,j,k;
        cin>>n>>k;

        if((n-(k-1))%2==1&&(n-(k-1))>0)
        {
            cout<<"YES"<<endl;
            for(i=1;i<k;i++)
            {
                cout<<"1 ";
            }
            cout<<n-k+1;
        }
        else if((n-(k-1)*2)%2==0&&(n-(k-1)*2)>0)
        {
            cout<<"YES"<<endl;
            for(i=1;i<k;i++)
            {
                cout<<"2 ";
            }
            cout<<n-(k-1)*2;
        }
        else cout<<"NO";
        if(t) cout<<"\n";
    }

    return 0;
}
