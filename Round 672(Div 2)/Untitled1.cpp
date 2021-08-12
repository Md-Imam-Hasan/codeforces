#include <bits/stdc++.h>
#define ll long long
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
const double pi = 2.0*acos(0.0);

using namespace std;

///Code starts from here
void swap(ll *xp, ll *yp)
{
    ll temp = *xp;
    *xp = *yp;
    *yp = temp;
}

// A function to implement bubble sort
ll bubbleSort(ll arr[], ll n)
{
    ll i, j,cnt=0;
    for (i = 0; i < n-1; i++)

    // Last i elements are already in place
    for (j = 0; j < n-i-1; j++)
        if (arr[j] > arr[j+1])
        {
            cnt++;
            swap(&arr[j], &arr[j+1]);
        }
    return cnt;
}
int main()
{
    fast_io;
    int t,kase=1;
    cin>>t;

    A:
    while(t--)
    {
        ll n,i,j,k;
        cin>>n;
        ll a[n];

        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        k=((n*(n-1))/2)-1;

        for(i=0;i<n-1;i++)
        {
            if(a[i]<=a[i+1])
            {
                cout<<"YES"<<endl;
                goto A;
            }
        }
        cout<<"NO"<<endl;

    }

    return 0;
}
