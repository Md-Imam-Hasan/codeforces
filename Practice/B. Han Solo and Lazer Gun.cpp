#include <bits/stdc++.h>
#define ll long long

using namespace std;

///Code starts from here
int main()
{
        int n,i,l=0;
        double x,y,x1,y1,k;
        cin>>n>>x>>y;
        set<double>st;

        for(i=0;i<n;i++)
        {
            cin>>x1>>y1;
            if(x1-x==0) l=1;
            else if(y1-y==0) st.insert(0);
            else
            {
                double j=(y1-y)/(x1-x);
                st.insert(j);
            }
        }

        ///for(auto l:st) cout<<l<<" ";
        ///cout<<endl;
        cout<<st.size()+l<<endl;

    return 0;
}

