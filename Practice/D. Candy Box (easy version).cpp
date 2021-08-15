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
        int n,i,j,k;
        cin>>n;
        int a[n];
        map<int,int>mp;
        map<int,int>::iterator it;
        vector<int>v;

        for(i=0;i<n;i++)
        {
            cin>>a[i];
            mp[a[i]]++;
        }
        for(it=mp.begin();it!=mp.end();it++)
        {
            v.push_back(it->second);
        }
        sort(v.begin(),v.end());


        stack<int>st;
        st.push(v[v.size()-1]);
        int sum=v[v.size()-1];
        for(i=v.size()-2;i>=0;i--)
        {
            if(st.top()==v[i])
            {
                st.push(v[i]-1);
                sum+=(v[i]-1);
            }
            else if(st.top()>v[i])
            {
                st.push(v[i]);
                sum+=(v[i]);
            }
            else if(st.top()>0)
            {
                k=st.top();
                st.push(k-1);
                sum+=(k-1);
            }
        }
        cout<<sum<<endl;
        while(!st.empty())
        {
            st.pop();
        }

    }

    return 0;
}

