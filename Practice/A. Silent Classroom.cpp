#include <bits/stdc++.h>
#define ll long long
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
const double pi =     2.0*acos(0.0);

using namespace std;

///Code starts from here
int main()
{
    fast_io;
    int t=1,kase=1;
    ///cin>>t;

    while(t--)
    {
        ll n,i,j,k;
        cin>>n;
        string a[n];
        int b[26];
        memset(b,0,sizeof(b));

        for(i=0;i<n;i++)
        {
            cin>>a[i];
            b[a[i][0]-'a']++;
        }
        ll sum=0;
        for(i=0;i<26;i++)
        {
            j=(b[i]%2)?b[i]/2+1:b[i]/2;
            k=b[i]-j;
            sum+=(j*(j-1)/2);
            sum+=(k*(k-1)/2);
        }
        cout<<sum<<endl;
        /*cout<<"Case "<<kase<<": "<<ans<<endl;
        kase++;
        if(t) cout<<"\n";*/
    }

    return 0;
}

