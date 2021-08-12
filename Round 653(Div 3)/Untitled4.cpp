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
        ll n,i,j,k,b;
        cin>>n>>k;
        int a[n];

        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);

        if((a[0]+n)%k==0)
        {
            cout<<n<<endl;;
        }
        else
        {
            j=(a[0]+n)/k;
            j++;
            b=j*k;
            cout<<b-a[0]+1<<endl;
        }
        ///if(t) cout<<"\n";
    }

    return 0;
}
