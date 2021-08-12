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
    ///scanf("%d",&t);

    while(t--)
    {
        int n,d,i,j,k,L=0,R=0,cnt=0,ans=0;
        cin>>n>>k>>d;
        ///scanf("%d%d%d",&n,&k,&d);
        int a[n];
        map<int,int>v;

        for(i=0;i<n;i++)
        {
            cin>>a[i];
            ///scanf("%d",&a[i]);
        }
        for(i=0;i<d;i++)
        {
            if(!v[a[i]])
            {
                cnt++;
                v[a[i]]++;
            }
            else v[a[i]]++;
        }
        ans=cnt;
        R=d;
        for(;R<n;R++,L++)
        {
            if(!v[a[R]])
            {
                cnt++;
                v[a[R]]++;
            }
            else v[a[R]]++;

            v[a[L]]--;
            if(!v[a[L]])
            {
                cnt--;
            }

            ans=min(ans,cnt);
        }
        ///printf("%d\n",ans);
        cout<<ans<<endl;
    }

    return 0;
}
