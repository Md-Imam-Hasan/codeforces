#include <bits/stdc++.h>
#define ll long long

using namespace std;

///Code starts from here
int main()
{
    ll n,k,t,a,b,i,j,l;
    cin>>n>>k;
    vector<ll>both,asingle,bsingle,single;

    for(i=0;i<n;i++)
    {
        cin>>t>>a>>b;
        if(a==1&&b==1)
        {
            both.push_back(t);
            ///bsingle.push_back(t);
            ///asingle.push_back(t);
        }
        else if(b==1&&a==0)
        {
            bsingle.push_back(t);
            single.push_back(t);
        }
        else if(a==1&&b==0)
        {
            asingle.push_back(t);
            single.push_back(t);
        }
    }
    sort(both.begin(),both.end());
    sort(bsingle.begin(),bsingle.end());
    sort(asingle.begin(),asingle.end());
    sort(single.begin(),single.end());
    ll asum=0,bsum=0,sum;

    if(asingle.size()+both.size()>=k&&bsingle.size()+both.size()>=k)
    {
        ll sum=0;
        for(i=0;i<both.size();i++)
        {
            if(k--)
            {
                sum+=both[i];
            }
            else break;
        }
        if(k)
        {
            for(i=0;i<min(asingle.size(),bsingle.size());i++)
            {
                if(k--)
                {
                    sum+=asingle[i]+bsingle[i];
                }
                else break;
            }
        }
        cout<<sum<<endl;
    }
    else
        cout<<"-1"<<endl;

    return 0;
}

