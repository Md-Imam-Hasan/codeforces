#include <bits/stdc++.h>
#define ll long long
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
const double pi =     2.0*acos(0.0);

using namespace std;

///Code starts from here
int main()
{
    fast_io;
    int t,kase=1;
    cin>>t;

    while(t--)
    {
        ll n,i,j,k,ones=0,zeros=0;
        string s;
        cin>>s;


        for(i=0;i<s.length();i++)
        {
            if(s[i]=='1') ones++;
            else zeros++;
        }
        if(ones==s.length())
        {
            cout<<ones<<endl;
        }
        else if(zeros==s.length())
        {
            cout<<"0"<<endl;
        }
        else
        {
            ones=0;
            vector<int>v;
            ll flg=0;
            ll cnt=0;
            for(i=0;i<s.length();i++)
            {
                if(s[i]=='1'&&flg)
                {
                    cnt++;
                }
                else if(s[i]=='1'&&!flg)
                {
                    cnt++;
                    flg=1;
                }
                else if(s[i]=='0'&&flg)
                {
                    flg=0;
                    v.push_back(cnt);
                    cnt=0;
                }
            }
            v.push_back(cnt);
            sort(v.begin(),v.end());
            ///for(auto x:v) cout<<x<<" ";
            ///cout<<endl;
            ll ans=0;
            for(i=v.size()-1;i>=0;i-=2)
            {
                ans+=v[i];
            }
            cout<<ans<<endl;
        }
        /*cout<<"Case "<<kase<<": "<<ans<<endl;
        kase++;
        if(t) cout<<"\n";*/
    }

    return 0;
}
