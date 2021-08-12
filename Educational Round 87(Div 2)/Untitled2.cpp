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
        int i,j=0,k=0,l,ans=INT_MAX;
        l=s.length();
        set<int>st;

        for(i=0;i<l;i++)
        {
            if(s[i]=='1') st.insert(1);
            else if(s[i]=='2') st.insert(2);
            else st.insert(3);
        }
        int a[4],b[4];
        for(i=1;i<=3;i++)
        {
            a[i]=0;
            b[i]=0;
        }
        int x=st.size();
        if(x<3) cout<<"0";
        else
        {
            int L=0,R=0;
            while(R<l-2)
            {
                while(k<3)
                {
                    if(s[R]=='1'&&a[1]==0&&R<l)
                    {
                        a[1]=1;
                        k++;
                    }
                    else if(s[R]=='2'&&a[2]==0&&R<l)
                    {
                        a[2]=1;
                        k++;
                        //R++;
                    }
                    else if(s[R]=='3'&&a[3]==0&&R<l)
                    {
                        a[3]=1;
                        k++;
                        //R++;
                    }
                    R++;
                    if(R==l) break;

                }
                L=R-1;
                while(j<3)
                {
                    if(s[L]=='1'&&b[1]==0&&L>=0)
                    {
                        b[1]=1;
                        j++;
                        //L--;
                    }
                    else if(s[L]=='2'&&b[2]==0&&L>=0)
                    {
                        b[2]=1;
                        j++;
                        //L--;
                    }
                    else if(s[L]=='3'&&b[3]==0&&L>=0)
                    {
                        b[3]=1;
                        j++;
                        //L--;
                    }
                    L--;
                    if(l<0) break;
                }
                ans=min(ans,R-L-1);
                memset(a,0,sizeof(a));
                memset(b,0,sizeof(b));
                R=R-2;
                j=k=0;
            }
            cout<<ans;
        }

        if(t) cout<<"\n";
    }

    return 0;
}
