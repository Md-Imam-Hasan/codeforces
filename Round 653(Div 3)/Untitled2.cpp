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
        ll n,i,j,k,cnt=0,flag=0;
        cin>>n;
        while(n!=1)
        {
            if(n%6==0)
            {
                n/=6;
                cnt++;
            }
            else if(n%6==3)
            {
                n*=2;
                cnt++;
            }
            else
            {
                flag=1;
                break;
            }
        }
        if(flag) cout<<"-1"<<endl;
        else cout<<cnt<<endl;
    }

    return 0;
}
