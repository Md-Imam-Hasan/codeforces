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
        ll n,i,j,k,cnt=0;
        cin>>n;
        int a[n];
        map<int,int>mp;
        set<int>st;
        set<int>::iterator it;

        for(i=0;i<n;i++)
        {
            cin>>a[i];
            mp[a[i]]++;
            st.insert(a[i]);
        }
        //sort(a,a+n);

        for(it=st.begin();it!=st.end();it++)
        {
            ll x=mp[*it];
            cnt+=x/(*it);
            ll y=x%(*it);
            it++;
            mp[*it]+=y;
            it--;
        }
        cout<<cnt;
        if(t) cout<<"\n";
    }

    return 0;
}

