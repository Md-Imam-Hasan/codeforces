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
        int n,i,j,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int a[n],cnt0=0;

        for(i=0;i<n;i++)
        {
             a[i]=s[i]-'0';
             if(a[i]==0) cnt0++;
             ///else if(a[i]==1) cnt1++;
        }

        ///for(i=0;i<n;i++) cout<<a[i];
        ///cout<<endl;

        if(cnt0==n)
        {
            if(n%(k+1)==0)
                cout<<n/(k+1);
            else cout<<(n/(k+1))+1;
        }
        ///else if(cnt1==n) cout<<"0";
        else
        {
            int zeros=0,ones=0,place=0;
            for(i=0;i<n;i++)
            {
                if(a[i]==0)
                    zeros++;
                else if(a[i]==1)
                {
                    ones++;
                    if(zeros>0&&ones==2)
                    {
                        zeros-=k;
                        place+=(zeros/(k+1));
                    }
                    else if(zeros>k&&ones==1)
                    {
                        place++;
                        zeros--;
                        zeros-=k;
                       place+=(zeros/(k+1));
                    }
                    zeros=0;
                    ones=1;
                }
                if(i==n-1)
                {
                    if(zeros>k&&ones==1)
                    {
                        place++;
                        zeros--;
                        zeros-=k;
                        place+=(zeros/(k+1));
                    }
                }
            }
            cout<<place;
        }

        if(t) cout<<"\n";
    }

    return 0;
}
