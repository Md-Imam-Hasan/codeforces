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

    while(t--)
    {
        int n,i,j,k,x=0,y=0,z=0,mx=0;
        cin>>n;
        int a[n];

        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=1;i<n-1;i++)
        {
            y=i;
            for(j=0;j<y;j++)
            {
                if(a[j]<a[y])
                {
                    x=j+1;
                    break;
                }
            }

            for(k=n-1;k>y;k--)
            {
                if(a[k]<a[y])
                {
                    z=k+1;
                    break;
                }
            }
            if(x&&y&&z)
                break;
            else
            {
                x=0,y=0,z=0;
            }
        }

        if(x&&y&&z)
        {
            cout<<"YES"<<endl;
            cout<<x<<" "<<y+1<<" "<<z;
        }
        else
        {
            cout<<"NO";
        }
        if(t) cout<<"\n";
    }

    return 0;
}

