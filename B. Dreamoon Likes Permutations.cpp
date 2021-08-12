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
        int n,i,j,k,flag=0;
        cin>>n;
        int a[n];
        vector<int>p1,p2;
        vector<pair<int,int>>v;
        map<int,int>mp,mp1,mp2,mp3;
        int mx1=0,mx2=0;

        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }

        for(i=0;i<n;i++)
        {
            if(!mp[a[i]]&&!flag)
            {
                p1.push_back(a[i]);
                mp[a[i]]++;
                mx1=max(mx1,a[i]);
            }
            else if(!mp1[a[i]])
            {
                p2.push_back(a[i]);
                mp1[a[i]]++;
                flag=1;
                mx2=max(mx2,a[i]);
            }
        }

        if(p1.size()==mx1&&p2.size()==mx2&&(mx1+mx2)==n)
        {
            v.push_back(make_pair(mx1,mx2));
        }

        p1.clear();
        p2.clear();

        ///cout<<"SIZE :"<<p1.size()<<endl;
        flag=0;
        mx1=0,mx2=0;
        for(i=n-1;i>=0;i--)
        {
            if(!mp2[a[i]]&&!flag)
            {
                p2.push_back(a[i]);
                mp2[a[i]]++;
                mx1=max(mx1,a[i]);
            }
            else if(!mp3[a[i]])
            {
                p1.push_back(a[i]);
                mp3[a[i]]++;
                flag=1;
                mx2=max(mx2,a[i]);
            }
        }

        if(p2.size()==mx1&&p1.size()==mx2&&(mx1+mx2)==n)
        {
            if(v.size())
            {
                if(mx2!=v[0].first)
                    v.push_back(make_pair(mx2,mx1));
            }
            else v.push_back(make_pair(mx2,mx1));
        }

        cout<<v.size()<<endl;
        if(v.size())
        {
            for(auto x:v)
            {
                cout<<x.first<<" "<<x.second<<endl;
            }
        }
        ///else cout<<"0"<<endl;

    }

    return 0;
}

