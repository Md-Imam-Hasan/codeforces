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
        string s;
        cin>>s;
        int i,j,k,l,zeros=0,ones=0;
        l=s.length();
        if(l==1||l==2)
        {
            cout<<s;
        }
        else
        {
            for(i=0;i<l;i++)
            {
                if(s[i]=='1') ones++;
                else zeros++;
            }

            if(ones==l||zeros==l)
            {
                cout<<s;
            }
            else
            {
                for(i=0;i<2*l;i++)
                {
                    if(i%2==0) cout<<"1";
                    else cout<<"0";
                }
            }
        }
        if(t) cout<<"\n";
    }

    return 0;
}

