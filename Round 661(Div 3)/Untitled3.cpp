#include <bits/stdc++.h>
#define ll long long
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
const double pi =     2.0*acos(0.0);

using namespace std;

///Code starts from here
int main()
{
    fast_io;
    int t;
    cin>>t;

    while(t--)
    {
        int n,i,j,k,ans=0,cnt=0,temp;
        cin>>n;
        int a[n];
        vector<int>v,vc;

        for(i=0;i<n;i++)
        {
            cin>>a[i];
            v.push_back(a[i]);
        }
        sort(a,a+n);
        sort(v.begin(),v.end());
        int s=a[0]*2;

        for(;s<=a[n-1]*2;s++)
        {
            cnt=0;
            vc=v;
            for(i=0;i<n;i++)
            {
                if(s<=vc[i]) break;
                else if(vc[i]==-1)
                {
                    continue;
                }
                else
                {
                    temp=s-vc[i];
                }
                for(j=0;j<n;j++)
                {
                    if(j==i) continue;
                    else if(temp==vc[j])
                    {
                        cnt++;
                        vc[i]=-1;
                        vc[j]=-1;
                        break;
                    }
                }
            }
            ans=max(ans,cnt);
        }
        cout<<ans<<endl;
    }

    return 0;
}
