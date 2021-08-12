#include <bits/stdc++.h>
#define ll long long
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
const double pi =     2.0*acos(0.0);

using namespace std;

///Code starts from here
int main()
{
    fast_io;
    int t;
    cin>>t;

    while(t--)
    {
        int n,i,j,k=0,flag=0,ind=0;
        cin>>n;
        string s;
        cin>>s;
        set<int>ones,zeros;
        int a[n];
        memset(a,0,sizeof(a));

        for(i=0;i<n;i++)
        {
            if(s[i]=='0')
            {
                zeros.insert(i+1);
            }
            else ones.insert(i+1);
        }

        for(i=0;i<n;i++)
        {
            if(s[i]=='1'&&!a[i])
            {
                flag=1;
                k++;
                a[i]=k;
                ind=1;
            }
            else if(s[i]=='0'&&!a[i])
            {
                flag=0;
                k++;
                a[i]=k;
                ind=1;
            }
            else ind=0;

            if(ind){
            j=i+1;
            while(1)
            {
                if(flag)
                {
                    auto it=zeros.lower_bound(j);
                    ///cout<<"Value "<<*it<<endl;
                    if(it!=zeros.end())
                    {
                        a[*it-1]=k;
                        j=*it;
                        zeros.erase(j);
                        flag=0;
                    }
                    else break;
                }
                else
                {
                    auto it=ones.lower_bound(j);
                    ///cout<<"Value "<<*it<<endl;
                    if(it!=ones.end())
                    {
                        a[*it-1]=k;
                        j=*it;
                        ones.erase(j);
                        flag=1;
                    }
                    else break;
                }
            }
            }
        }
        cout<<k<<endl;
        for(auto x:a)
        {
            cout<<x<<" ";
        }
        cout<<endl;
    }

    return 0;
}

