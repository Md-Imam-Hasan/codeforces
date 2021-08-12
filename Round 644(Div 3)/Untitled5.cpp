#include <bits/stdc++.h>
#define ll long long

using namespace std;
string a[55];
ll n,i,j,k;

void possible()
{

}
///Code starts from here
int main()
{
    int t;
    cin>>t;

    A:
    while(t--)
    {

        cin>>n;

        for(i=0;i<n;i++) cin>>a[i];

        for(i=0;i<n;i++)
        {
        for(j=0;j<n;j++)
        {
            if(a[i][j]=='1')
            {
                if(i==n-1||j==n-1)
                    continue;
                else if(a[i+1][j]=='1'||a[i][j+1]=='1')
                {
                     continue;
                }
                else
                {
                    cout<<"NO";
                    if(t) cout<<"\n";
                    goto A;
                }
            }
        }
        }
        cout<<"YES";
        if(t) cout<<"\n";
    }

    return 0;
}

