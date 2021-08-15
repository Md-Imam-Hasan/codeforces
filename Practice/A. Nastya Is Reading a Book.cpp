#include <bits/stdc++.h>
#define ll long long
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
const double pi = 2.0*acos(0.0);

using namespace std;

///Code starts from here
int main()
{
    fast_io;
    int t,kase=1;
    int n,i,j,k,x,y;
    cin>>t;
    j=t;
    vector<pair<int,int>>v;

    while(j--)
    {
        cin>>x>>y;
        v.push_back(make_pair(x,y));
    }
    cin>>k;
    for(i=0;i<t;i++)
    {
        if(v[i].first<=k&&v[i].second>=k)
        {
            n=t-i;
            break;
        }
    }
    cout<<n<<endl;

    return 0;
}
