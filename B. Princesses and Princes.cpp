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
        int n,i,j=1,k=0,l;
        cin>>n;
        bool prince[n+1],princes[n+1];
        memset(prince,false,sizeof(prince));
        memset(princes,false,sizeof(princes));
        int x=n;
        while(n--)
        {
            int m;
            cin>>m;
            int a[m];
            for(i=0;i<m;i++)
            {
                cin>>a[i];
                if(!princes[j]&&!prince[a[i]])
                {
                    prince[a[i]]=true;
                    princes[j]=true;
                }
            }
            j++;
        }


        for(i=1;i<=x;i++)
        {
            if(!princes[i])
            {
                k=i;
                break;
            }
        }

        if(k>0)
        {
            for(i=1;i<=x;i++)
            {
                if(!prince[i])
                {
                    l=i;
                    break;
                }
            }
            cout<<"IMPROVE"<<endl;
            cout<<k<<" "<<l<<endl;
        }
        else
            cout<<"OPTIMAL"<<endl;
    }

    return 0;
}

