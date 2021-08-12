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
        ll n,i,j,k,l,cnt=0,sum=0,mx=-1,pos;
        cin>>n>>k;
        ll a[n];
        vector<ll>v,s;

        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        v.push_back(0);

        for(i=1;i<n-1;i++)
        {
            if(a[i]>a[i-1]&&a[i]>a[i+1])
            {
                cnt++;
                v.push_back(1);
            }
            else v.push_back(0);

        }
        v.push_back(0);

        ///if(cnt>0)
        s.push_back(0);
        for(i=0;i<v.size();i++)
        {
            sum+=v[i];
            s.push_back(sum);
        }

        l=k;
        for(i=0,j=k;j<=n;i++,j++)
        {
            if(s[j-1]-s[i]>mx)
            {
                mx=s[j-1]-s[i];
                pos=i+l;
                cout<<pos<<endl;
            }
        }
        if(cnt>0)
        cout<<mx+1<<" "<<pos<<endl;
        else cout<<"1 1"<<endl;
    }

    return 0;
}

