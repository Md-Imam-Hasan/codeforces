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
        int n,i,j,k,mx=0,flag1=0,flag2=0,cnt=0;
        string s;
        cin>>s;
        map<char,int>mp;

        for(i=0;i<s.length();i++)
        {
            mp[s[i]]++;
            mx=max(mx,mp[s[i]]);
        }

        for(i=0;i<10;i++)
        {
            for(j=0;j<10;j++)
            {
                flag2=0;
                flag1=0;
                cnt=0;
                for(k=0;k<s.length();k++)
                {
                    if((s[k]-'0')==i&&!flag1)
                    {
                        flag1=1;
                        cnt++;
                        flag2=0;
                    }
                    else if((s[k]-'0')==j&&!flag2)
                    {
                        flag2=1;
                        cnt++;
                        flag1=0;
                    }
                }
                if(cnt%2) cnt--;
                mx=max(cnt,mx);
                ///cout<<"Value "<<mx<<endl;
            }
        }
        cout<<s.length()-mx<<endl;
    }

    return 0;
}
