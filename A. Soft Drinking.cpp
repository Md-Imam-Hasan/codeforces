#include<iostream>
#include<string.h>
#include<algorithm>
#include<vector>
#include<queue>
#include<stack>
#include<cmath>
#include<iomanip>
#include<stdio.h>
#include<math.h>
#define FOR(i,j,n) for(int i=j;i<n;i++)

using namespace std;

int main()
{
    int n, k, l, c, d, p, nl, np,a,b,x,y,z;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    a=(k*l)/nl;
    b=c*d;
    x=p/np;
    y=min(a,b);
    z=min(x,y)/n;
    cout<<z<<endl;

    return 0;
}
