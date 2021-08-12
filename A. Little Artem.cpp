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
        int n,m;
        cin>>n>>m;
        int x=n*m;
        int w=(x-1)/2;


        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(i%2==0)
                {
                    if(j%2==0)
                        cout<<"B";
                    else
                    {
                        if(w>0) cout<<"W",w--;
                        else cout<<"B";
                    }
                }
                else if(i%2==1)
                {
                    if(j%2==1)
                        cout<<"B";
                    else
                    {
                        if(w>0) cout<<"W",w--;
                        else cout<<"B";
                    }
                }
            }
            cout<<endl;
        }
    }

    return 0;
}

