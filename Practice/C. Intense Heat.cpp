#include <bits/stdc++.h>
#define FOR(i,j,n) for(i=j;i<n;i++)

using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int x,i,j,p,q;
    double r=0,v[n+1],v1;

    v[0]=0;
    FOR(i,0,n)
    {
        cin>>x;
        v[i+1]=x+v[i];
    }

    FOR(i,0,n)
    {
        FOR(j,i+k,n+1)
        {
            r=max(r,(v[j]-v[i])/(j-i));
        }
    }

    std::cout << std::fixed << std::setprecision(15) << r<<endl;

    return 0;
}
