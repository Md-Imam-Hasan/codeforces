#include <bits/stdc++.h>
#define ll long long

using namespace std;

///Code starts from here
int main()
{
    int n,m,a,b,i,j,k,cnt=0;
    cin>>n;
    vector<int>v;
    vector<int>vp;
    for(i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    cin>>m;
    for(i=0;i<m;i++)
    {
        cin>>a;
        vp.push_back(a);
    }

    sort(vp.begin(),vp.end());

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(abs(v[i]-vp[j])<=1)
            {
                ///cout<<v[i]<<" "<<vp[j]<<endl;
                cnt++;
                vp[j]=-1000;
                break;
                ///cout<<"Here "<<cnt<<endl;
            }
        }
    }
    cout<<cnt<<endl;

    return 0;
}

