#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    double a[n],j,count=0,sum=0;

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }

    if(round(sum/n)==k)
        cout<<"0"<<endl;
    else
    {
        while(round(sum/(n+count))!=k)
        {
            sum+=k;
            count++;
        }

        cout<<count<<endl;
    }
    return 0;
}
