#include <bits/stdc++.h>
#define ll long long

using namespace std;

///Code starts from here
int main()
{
    int t;
    cin>>t;

    A:
    while(t--)
    {
        vector<int>v;
        int i,j,k;
        for(i=0;i<3;i++)
        {
            cin>>j;
            v.push_back(j);
        }
        sort(v.begin(),v.end());

            k=v[0]+v[1];
            if(k>v[2])
            {
                j=(k-v[2])/2;
                cout<<v[2]+j<<endl;
            }
            else
            {
                k=min(k,v[2]);
                cout<<k<<endl;
            }

    }

    return 0;
}

