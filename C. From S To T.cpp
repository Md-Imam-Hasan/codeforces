#include <bits/stdc++.h>
#define ll long long
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

///Code starts from here
int main()
{
    fast_io;
    int n;
    cin>>n;

    while(n--)
    {
        string s,t,p;
        cin>>s>>t>>p;
        int i,j,k,flag=0;
        map<char,int>mp1,mp2;
        map<char,int>:: iterator it;

        for(i=0;i<p.size();i++)
        {
            mp1[p[i]]++;
        }

        if(s.size()>t.size())
        {
            flag=1;
        }
        else
        {
            int l=s.size();
            for(i=0,j=0;i<t.size();i++)
            {
                if(t[i]==s[j])
                {
                    j++;
                }
                else
                {
                    if(mp1[t[i]])
                    {
                        mp1[t[i]]--;
                        l++;
                        if(l>t.size())
                        {
                            flag=1;
                            break;
                        }
                    }
                    else
                    {
                        flag=1;
                        break;
                    }
                }
            }
        }
        if(flag) cout<<"NO";
        else cout<<"YES";
        if(n) cout<<"\n";
    }

    return 0;
}
