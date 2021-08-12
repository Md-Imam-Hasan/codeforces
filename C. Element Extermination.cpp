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


    A:
        while(t--)
    {
        int n,i,j,k,cnt=0,y=0;
        cin>>n;
        int a[n];

        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]==1)
                k=i;
        }

        if(a[n-1]==1) cout<<"NO"<<endl;
        else if(a[0]==n) cout<<"NO"<<endl;
        else
        {
            int x=a[0];
            for(i=1;i<n;i++)
            {
                if(a[i]>x&&cnt==0) continue;
                else if(a[i]<x)
                {
                    if(cnt)
                    {
                        if(a[i]>y)
                        {
                            y=a[i];
                        }
                    }
                    else
                    {
                        cnt=1;
                        y=a[i];
                    }
                }
                else if(a[i]>x&&cnt)
                {
                    cnt=0;
                    y=0;
                }
            }

            if(!cnt) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }

    return 0;
}

