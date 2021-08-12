#include <bits/stdc++.h>
#define ll long long
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
const double pi =     2.0*acos(0.0);

using namespace std;

///Code starts from here
int ask(int a,int b)
{
    cout<<"! "<<a+1<<" "<<b+1<<endl;
    int x;
    cin>>x;
    return x;
}
int main()
{
    fast_io;
    int n,i,j,k=0,x,y;
    cin>>n;
    int a[n];
    for(i=1;i<n;i++)
    {
        x=ask(k,i);
        y=ask(i,k);
        if(x>y)
        {
            a[k]=x;
            k=i;
        }
        else
        {
            a[i]=y;
        }
    }
    a[k]=n;

    cout<<"! ";
    for(i=0;i<n;i++) cout<<a[i]<<" ";
    cout<<endl;

    return 0;
}
