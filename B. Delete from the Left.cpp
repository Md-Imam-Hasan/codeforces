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
    int i,j,k,l,tm,v;
    string s,t;
    cin>>s>>t;
    k=s.length();
    l=t.length();
    tm=l+k;

    if(k>=l)
    {
        for(i=k-1,j=l-1;i>=k-l&&j>=0;i--,j--)
        {
            if(s[i]==t[j])
            {
                tm-=2;
            }
            else break;
        }
        cout<<tm<<endl;
    }
    else if(l>k)
    {
        for(i=k-1,j=l-1;i>=0&&j>=l-k;i--,j--)
        {
            if(s[i]==t[j])
            {
                tm-=2;
            }
            else break;
        }
        cout<<tm<<endl;
    }

    return 0;
}
