#include <bits/stdc++.h>
#define ll long long

using namespace std;
bool b[100002];

///Code starts from here
int main()
{

        ll n,i,j,k;
        cin>>n;
        int a[n+1];
        memset(b,true,sizeof(b));
       /// cout<<b[1]<<endl;
       a[0]=0;
       b[0]=false;
        for(i=1;i<n+1;i++)
        {
            cin>>a[i];
            b[a[i]]=false;
        }

        vector<int>v;

        for(i=1;i<100002;i++)
        {
            if(b[i]==true) v.push_back(i);
        }

        j=0;
        for(i=1;i<n+1;i++)
        {
            if(a[i]!=a[i-1]) cout<<a[i-1]<<" ";
            else
            {
                cout<<v[j]<<" ";
                j++;
            }
        }
        cout<<"\n";
    return 0;
}

