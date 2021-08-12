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
        ll n,i,j,k,cnt=0,flag=0;
        cin>>n;
        ll a[n];

        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]==1) cnt++;
        }

        for(i=0;i<n-1;i++)
        {
            if(a[i]==1)
            {
                flag=!flag;
                cnt--;
                ///cout<<flag<<endl;
            }
            else if(a[i]>1)
            {

                break;
            }
        }

        if(n==1)
        {
            cout<<"First"<<endl;
            goto A;
        }
        else
        {
            if(flag) cout<<"Second"<<endl;
            else cout<<"First"<<endl;
        }


    }

    return 0;
}
