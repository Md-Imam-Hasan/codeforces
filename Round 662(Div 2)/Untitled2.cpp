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
    //cin>>t;

    while(t--)
    {
        int n,i,j,k,q;
        cin>>n;
        int x;
        char c;
        int cnt[100005]={0};
        int cnt2=0,cnt4=0;

        for(i=0;i<n;i++)
        {
            cin>>x;
            cnt2-=cnt[x]/2;
            cnt4-=cnt[x]/4;
            cnt[x]++;
            cnt2+=cnt[x]/2;
            cnt4+=cnt[x]/4;
        }
        cin>>q;
        for(i=0;i<q;i++)
        {
            cin>>c>>x;
            cnt2-=cnt[x]/2;
            cnt4-=cnt[x]/4;
            if(c=='+') cnt[x]++;
            else cnt[x]--;
            cnt2+=cnt[x]/2;
            cnt4+=cnt[x]/4;

            if(cnt2>=4&&cnt4>=1) cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
        /*cout<<"Case "<<kase<<": "<<ans<<endl;
        kase++;
        if(t) cout<<"\n";*/
    }

    return 0;
}
