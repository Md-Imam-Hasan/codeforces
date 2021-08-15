#include <bits/stdc++.h>
#define ll long long

using namespace std;

///Code starts from here
int main()
{
    int n,m,i,j,k,flag=0;
    cin>>n>>m;
    string s[n],p,q;

    vector<pair<string,string>>v;

    for(i=0;i<n;i++)
    {
        cin>>s[i];
    }

    for(i=0;i<n;i++)
    {
        p=s[i];
        reverse(p.begin(),p.end());
        for(j=i;j<n;j++)
        {
            if(p==s[j])
            {
                if(i!=j)
                {
                    v.push_back(make_pair(s[i],s[j]));
                    break;
                }
                else
                {
                    q=p;
                    flag=1;
                    break;
                }
            }
        }
    }

    if(v.size()>0)
    {
        if(flag)
        {
            k=v.size()*2*m+m;
            cout<<k<<endl;
        }
        else
        {
            k=v.size()*2*m;
            cout<<k<<endl;
        }

        for(i=0;i<v.size();i++)
        {
            cout<<v[i].first;
        }
        if(flag) cout<<q;
        for(i=v.size()-1;i>=0;i--)
        {
            cout<<v[i].second;
        }
        cout<<endl;
    }
    else if(flag)
    {
        cout<<m<<endl;
        cout<<q<<endl;
    }
    else
    {
        cout<<"0"<<endl;
        cout<<endl;
    }

    return 0;
}

