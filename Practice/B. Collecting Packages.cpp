#include <bits/stdc++.h>
#define ll long long

using namespace std;

///Code starts from here

bool cmp(const pair<int,int> &a, const pair<int,int> &b)
{
    if(a.first==b.first)
        return a.second<b.second;
    else return a.first<b.first;
}
int main()
{
    int t;
    cin>>t;

    A:
    while(t--)
    {
        int n,i,j,k;
        cin>>n;
        int x,y;
        string s="";
        vector<pair<int,int>>v;

        for(i=0;i<n;i++)
        {
            cin>>x>>y;
            v.push_back(make_pair(x,y));
        }
        sort(v.begin(),v.end(),cmp);

        for(i=1;i<=v[0].first;i++) s+='R';
        for(i=1;i<=v[0].second;i++) s+='U';

        x=v[0].first;
        y=v[0].second;

        for(i=1;i<n;i++)
        {
            if(v[i-1].second>v[i].second)
            {
                cout<<"NO"<<endl;
                goto A;
            }
            else
            {
                int a=v[i].second-y;
                int b=v[i].first-x;
                for(j=1;j<=b;j++) s+='R';
                for(j=1;j<=a;j++) s+='U';
                y=v[i].second;
                x=v[i].first;
            }
        }
        cout<<"YES"<<endl;
        cout<<s<<endl;
        ///if(t) cout<<"\n";
    }

    return 0;
}

