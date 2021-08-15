#include <bits/stdc++.h>
#define ll long long

using namespace std;

///Code starts from here
int main()
{
    ll n,i,j,k,start=1,last=1,flag=0,x,y;
        cin>>n;
        vector<int>a;

        for(i=0;i<n;i++)
        {
            cin>>y;
            a.push_back(y);
        }

        for(i=0;i<n;i++)
        {
            if(a[i]>a[i+1]&&!flag&&i<n-1)
            {
                flag=1;
                start=i+1;
            }
            else if(a[i]<a[i-1])
            {
                if(flag)
                {
                    last=i+1;
                }
            }
            else if(flag&&a[i]>a[i-1]) break;
        }
        ///cout<<start<<" "<<last<<endl;
        sort(a.begin()+start-1,a.end()-(n-last));
        ll flag1=0;
        for(i=0;i<n-1;i++)
        {
            ///cout<<a[i]<<" ";
            if(a[i]>a[i+1])
                flag1=1;
        }
       ///cout<<endl;
        if(!flag1)
        {
            cout<<"yes"<<endl;
            cout<<start<<" "<<last<<endl;
        }
        else cout<<"no"<<endl;

    return 0;
}

