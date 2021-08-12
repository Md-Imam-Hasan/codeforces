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
#define FOR(i,j,n) for(i=j;i<n;i++)

using namespace std;

int main()
{
    string r,s,t,u;
    cin>>r>>s>>t;
    u=r+s;
    //cout<<r<<" "<<s<<" "<<t<<" "<<u<<endl;
    int rl,sl,tl,ul;
    rl=r.length();
    sl=s.length();
    tl=t.length();
    ul=u.length();
    //cout<<rl<<" "<<sl<<" "<<tl<<" "<<ul<<endl;

    if(ul>tl||ul<tl)
    {
        cout<<"NO"<<endl;
        return 0;
    }

    int A[tl],B[ul],i,j;

    FOR(i,0,tl)
    {
        A[i]=t[i];
        B[i]=u[i];
        //cout<<A[i]<<endl;
        //cout<<B[i]<<endl;
    }

    sort(A,A+tl);
    sort(B,B+ul);

    FOR(i,0,tl)
    {
       if(A[i]!=B[i])
        break;
    }
    //cout<<i<<endl;

    if(i==tl)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

    return 0;
}
