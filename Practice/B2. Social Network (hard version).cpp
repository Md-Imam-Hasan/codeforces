#include <bits/stdc++.h>
#define ll long long
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

///Code starts from here
int main()
{
    fast_io;
        int n,i,j,k,x;
        cin>>n>>k;
        int a[n];
        list<int>v;
        list<int>::iterator it;
        map<int,int>mp;

        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }

        for(i=0;i<n;i++)
        {
            if(v.size()<k)
            {
                if(!mp[a[i]])
                {
                    v.push_front(a[i]);
                    mp[a[i]]=1;
                }
            }
            else if(v.size()==k)
            {
                if(!mp[a[i]])
                {
                    x=v.back();
                    v.pop_back();
                    mp[x]=0;
                    v.push_front(a[i]);
                    mp[a[i]]=1;
                }
            }
        }

        cout<<v.size()<<endl;
        for(it=v.begin();it!=v.end();it++)
            cout<<*it<<" ";

    return 0;
}

