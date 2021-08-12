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
        string s;
        cin>>s;
        int n,i,j,k=0,x;
        vector<int>v(4);
        string way="RDLU";

        for(i=0;i<s.length();i++)
        {
            if(s[i]=='L') v[0]++;
            else if(s[i]=='R') v[1]++;
            else if(s[i]=='D') v[2]++;
            else v[3]++;
        }

        for(i=0;i<4;i++)
        {
            if(v[i]==0) k++;
        }
        if(k==0)
        {
            int mxl=min(v[0],v[1]);
            int mxd=min(v[2],v[3]);
            cout<<2*mxl+2*mxd<<endl;
            for(i=0;i<4;i++)
            {
                if(i%2==0) x=mxl;
                else x=mxd;
                for(j=0;j<x;j++)
                {
                    cout<<way[i];
                }
            }
            cout<<endl;
        }
        else if(k==1)
        {
            if(v[0]>0&&v[1]>0)
            {
                cout<<"2"<<endl;
                cout<<"LR"<<endl;
            }
            else
            {
                cout<<"2"<<endl;
                cout<<"UD"<<endl;
            }
        }
        else if(k==2)
        {
            if(v[0]>0&&v[1]>0)
            {
                cout<<"2"<<endl;
                cout<<"LR"<<endl;
            }
            else if(v[2]>0&&v[3]>0)
            {
                cout<<"2"<<endl;
                cout<<"UD"<<endl;
            }
            else
            {
                cout<<"0"<<endl;
                cout<<endl;
            }
        }
        else
        {
            cout<<"0"<<endl;
            cout<<endl;
        }
    }

    return 0;
}

