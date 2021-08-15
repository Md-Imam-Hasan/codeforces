#include <bits/stdc++.h>
#define ll long long

using namespace std;

///Code starts from here
int main()
{
    ll n,i,j,k;
        cin>>n;
        int a[n],ones=0,zeros=0;
        vector<int>v;

        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]==1) v.push_back(-1),ones++;
            else v.push_back(1),zeros++;
        }

        int best=0,sum=0;

        for(i=0;i<n;i++)
        {
            sum=max(v[i],sum+v[i]);
            best=max(best,sum);
        }
        if(zeros==0) cout<<ones-1<<endl;
        else
        cout<<ones+best<<endl;

    return 0;
}

