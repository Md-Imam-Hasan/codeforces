// C++ program to demonstrate default behaviour of
// sort() in STL.
#include <bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cmath>

using namespace std;


int main()
{
    int n;
    cin>>n;
    int A[n];
    int t=0;

    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    sort(A,A+n);

    for(int j=n-1;j>=0;j--)
    {
        if(A[j]==0)
        {
            continue;
        }
        else if(A[j]==A[j-1]&&j>0)
        {
            continue;
        }
        else
        {
            t++;
        }
    }

    cout<<t<<endl;

    return 0;
}
