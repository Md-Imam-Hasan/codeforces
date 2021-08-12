#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int t;
    cin>>t;
    int n;

    while(t--)
    {
        cin>>n;
        vector<int>v;
        int i,l;
        int j=1;
        while(n)
        {
            i=n%10;
            if(i>0)
            {
                v.push_back(i*j);
            }
            j=j*10;
            n=n/10;
        }
        l=v.size();
        cout<<l<<endl;
        for(i=0;i<l;i++)
        {
            cout<<v[i]<<" ";
        }
        v.clear();
        if(t) cout<<endl;
    }

    return 0;
}
