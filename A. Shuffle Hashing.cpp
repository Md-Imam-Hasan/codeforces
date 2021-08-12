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
        string p,h;
        cin>>p>>h;
        int i,j,k,flag=0,pl,hl;
        vector<int>pv(26);
        pl=p.size();
        hl=h.size();

        for(i=0;i<pl;i++)
        {
            pv[p[i]-'a']++;
        }

        for(i=0;i<hl;i++)
        {
            vector<int>hv(26);
            for(j=i;j<hl;j++)
            {
                hv[h[j]-'a']++;
                if(pv==hv)
                {
                    cout<<"YES"<<endl;
                    goto A;
                }
            }
        }
        cout<<"NO"<<endl;

    }

    return 0;
}

