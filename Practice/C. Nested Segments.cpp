#include<bits/stdc++.h>
using namespace std;
const int N=3e5+1;
int a[N],b[N],c[N];

bool compare(int x,int y)
{
    if(a[x]==a[y])
        return b[x]>b[y];
    else return a[x]<a[y];
}

int main()
{
    int n,i,j;
    cin>>n;

    for(i=1;i<=n;i++)
    {
        cin>>a[i]>>b[i];
        c[i]=i;
    }
    std::sort(c+1,c+n+1,compare);

    for(i=2;i<=n;i++)
    {
        j=c[i];
        if(b[j]<=b[c[i-1]])
        {
            cout<<j<<" "<<c[i-1]<<endl;
            return 0;
        }
    }
    cout<<"-1 -1"<<endl;
}
