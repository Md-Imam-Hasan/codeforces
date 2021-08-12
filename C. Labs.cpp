#include <bits/stdc++.h>
#define ll long long
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

///Code starts from here
int main()
{
    fast_io;

        ll n,i,j=-1,k=1;
        cin>>n;
        int a[n][n];

        for(i=0;i<n;i++)
        {
            if(j==-1){
                j++;
            for(;j<n;j++)
            {
                a[j][i]=k;
                k++;
            }
            }
            else if(j==n)
            {
                j--;
                for(;j>=0;j--)
                {
                    a[j][i]=k;
                    k++;
                }
            }
        }

        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }

    return 0;
}

