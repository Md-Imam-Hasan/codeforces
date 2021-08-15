#include <bits/stdc++.h>
#define ll long long
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
const double pi =     2.0*acos(0.0);

using namespace std;

///Code starts from here
int main()
{
    fast_io;
    int t,k=1;
    cin>>t;
    int chess=0;
    while(chess<t-1)
    {
        k++;
        chess=(k+k)-2;
    }
    cout<<k<<endl;
    int i,j;
    for(j=1;j<=k;j++)
    {
        cout<<"1 "<<j<<endl;
        t--;
    }
    if(t>1)
    {
        for(j=1;j<t;j++)
        {
            cout<<k<<" "<<j+1<<endl;
        }
    }
    if(t) cout<<k<<" "<<k<<endl;
    return 0;
}

