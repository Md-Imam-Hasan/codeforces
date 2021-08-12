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
        int n,i,j,k;
        cin>>n;
        int a[n];
        set<int>st;

        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]%2==0)
                st.insert(a[i]);
        }

        int ans=0;
        while(!st.empty())
        {
            k=*st.rbegin();
            st.erase(k);
            if(k%2==0)
            {
                ans++;
                k/=2;
                st.insert(k);
            }
        }
        cout<<ans<<endl;
        st.clear();
    }

    return 0;
}

