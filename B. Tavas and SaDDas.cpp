#include <bits/stdc++.h>
#define ll long long
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
const double pi = 2.0*acos(0.0);

using namespace std;

///Code starts from here
int main()
{
    fast_io;
    int t=1,kase=1;

    while(t--)
    {
        ll i,j,k,ans=0;
        string s;
        cin>>s;
        k=s.length();

        for(i=0;i<k;i++)
        {
            ans+=((int)pow(2,i));
        }
        reverse(s.begin(),s.end());
        for(i=0;i<k;i++)
        {
            if(s[i]=='7')
            {
                ans+=(((int)pow(2,(i+1)))/2);
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}


