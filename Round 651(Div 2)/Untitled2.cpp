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
        int n,i,j,k,odd=0,even=0,cnt=0;
        cin>>n;
        int a[2*n];
        vector<pair<int,int>>oddv,evenv;

        for(i=0;i<2*n;i++)
        {
            cin>>a[i];
            if(a[i]%2==0)
            {
                even++;
                evenv.push_back(make_pair(a[i],i+1));
            }
            else
            {
                odd++;
                oddv.push_back(make_pair(a[i],i+1));
            }
        }

        if(even>=odd){
        for(i=0;i<evenv.size()-1;i+=2)
        {
            cout<<evenv[i].second<<" "<<evenv[i+1].second<<endl;

            cnt++;
            if(cnt==(n-1)) break;
        }
        if(cnt<(n-1))
        {
            for(i=0;i<oddv.size()-1;i+=2)
            {
                cout<<oddv[i].second<<" "<<oddv[i+1].second<<endl;
                cnt++;
                if(cnt==(n-1)) break;
            }
        }
        }
        else
        {
            for(i=0;i<oddv.size()-1;i+=2)
            {
                cout<<oddv[i].second<<" "<<oddv[i+1].second<<endl;
                cnt++;
                if(cnt==(n-1)) break;
            }
            if(cnt<(n-1))
            {
            for(i=0;i<evenv.size()-1;i+=2)
            {
            cout<<evenv[i].second<<" "<<evenv[i+1].second<<endl;
            cnt++;
            if(cnt==(n-1)) break;
            }
            }
        }


       /// if(t) cout<<"\n";
    }

    return 0;
}
