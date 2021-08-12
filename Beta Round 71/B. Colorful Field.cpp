#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,k,t;
    cin>>n>>m>>k>>t;
    int a,b,w[k],x,y;

    for(int i=0;i<k;i++)
    {
        cin>>a>>b;
        w[i]=(a-1)*m+b;
    }
    sort(w,w+k);

    for(int i=1;i<=t;i++)
    {
        cin>>a>>b;
        x=(a-1)*m+b;
        int j=0;
        while(w[j]<x&&j<k)
            j++;
        if(w[j]==x)
            cout<<"Waste"<<endl;
        else
        {
            y=(x-(j))%3;
            if(y==1)
                cout<<"Carrots"<<endl;
            else if(y==2)
                cout<<"Kiwis"<<endl;
            else
                cout<<"Grapes"<<endl;
        }
    }
}
