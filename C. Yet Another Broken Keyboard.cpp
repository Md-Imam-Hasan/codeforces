#include <bits/stdc++.h>
#define ll long long

using namespace std;

///Code starts from here
int main()
{
   ll n,i,j,k;
        cin>>n>>k;
        string s;
        cin>>s;
        vector<ll>v(26);
        char c;

        for(i=0;i<k;i++)
        {
            cin>>c;
            v[c-'a']++;
        }
        ll cnt=0,ans=0;
        for(i=0;i<n;i++)
        {
            if(v[s[i]-'a'])
                cnt++;
            else
            {
                ///cout<<cnt<<endl;
                if(cnt>0)
                {
                    ans+=(cnt*(cnt+1))/2;
                }
                cnt=0;
            }
        }
        if(cnt>0)
        {
            ans+=(cnt*(cnt+1))/2;
        }
        cout<<ans<<endl;

    return 0;
}

