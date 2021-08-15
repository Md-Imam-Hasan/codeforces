#include <bits/stdc++.h>
#define ll long long

using namespace std;

///Code starts from here
int main()
{
    string s;
    cin>>s;
    int i,b1=0,b2=0,j;
    vector<int>v,ans;

    for(i=0;i<s.length();i++)
    {
        if(s[i]=='(')
        {
            b1++;
            v.push_back(i+1);
        }
    }

    for(i=s.length()-1,j=0;i>=0;i--)
    {
        if(s[i]==')')
        {
            if(b1>0&&i+1>v[j])
            {
                ans.push_back(v[j]);
                ans.push_back(i+1);
                b1--;
                j++;
            }
        }
    }
    sort(ans.begin(),ans.end());
    /*int cnt1=1;
    for(i=1;i<ans.size()/2;i++)
    {
        if(ans[i]-ans[i-1]>1)
            cnt1++;
    }
    int cnt2=1;
    for(i=ans.size()-1;i>ans.size()/2;i--)
    {
        if(ans[i]-ans[i-1]>1)
            cnt2++;
    }

    int cnt=max(cnt1,cnt2);*/

    if(ans.size()>0)
    {
        cout<<"1"<<endl;
    cout<<ans.size()<<endl;
    for(i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    }
    else cout<<"0"<<endl;

    return 0;
}

