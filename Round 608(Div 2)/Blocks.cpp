#include<bits/stdc++.h>
using namespace std;
char a[202];

int main()
{
    int n;
    cin>>n;
    cin>>a;
    vector<int>v;
    //cout<<a<<endl;
    char x='W',y='B';

    for(int i=0;i<n-1;i++)
    {
        if(a[i]==x)
        {
            continue;
        }
        else
        {
            a[i]=x;
            v.push_back(i+1);
            if(a[i+1]==x)
            {
                a[i+1]=y;
            }
            else
            {
                a[i+1]=x;
            }
        }
    }

    if(a[n-1]!=x)
    {
        x='B',y='W';
        for(int i=n-1;i>0;i--)
        {
            if(a[i]==x)
            {
                continue;
            }
            else
            {
                a[i]=x;
                v.push_back(i);
                if(a[i-1]==x)
                {
                    a[i-1]=y;
                }
                else
                {
                    a[i-1]=x;
                }
            }
        }
        if(a[0]!=x)
        {
            cout<<"-1"<<endl;
            return 0;
        }
    }
    int l=v.size();
    cout<<l<<endl;
    for(int i=0;i<l;i++)
    {
        cout<<v[i];
        if(i!=l-1)
            cout<<" ";
    }
    //cout<<a<<endl;

    return 0;
}
