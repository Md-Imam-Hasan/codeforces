#include <bits/stdc++.h>
#define ll long long
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

///Code starts from here
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

// Function to find gcd of array of
// numbers
int findGCD(vector<int>arr, int n)
{
    int result = arr[0];
    for (int i = 1; i < n; i++)
        result = gcd(arr[i], result);

    return result;
}

int main()
{
    fast_io;
    ll n;
    cin>>n;
    ll a[n][n];
    ll i,j,k,x;
    vector<int>ans;

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }

    x=sqrt(((a[0][1]*a[0][2])/a[1][2]));
    cout<<x<<" ";
    for(i=1;i<n;i++)
        cout<<a[0][i]/x<<" ";

    cout<<endl;

    return 0;
}

