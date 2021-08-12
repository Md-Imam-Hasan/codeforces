#include <bits/stdc++.h>
#define ll long long
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
const double pi = 2.0*acos(0.0);

using namespace std;

///Code starts from here
bool isPrime(int n)
{
    // Corner case
    if (n <= 1)
        return false;

    // Check from 2 to n-1
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;

    return true;
}
int main()
{
    fast_io;
    int t,kase=1;
    cin>>t;

    while(t--)
    {
        int n,i,j,k;
        cin>>n;
        if(isPrime(n))
        {
            for(i=0;i<n;i++)
            {
                for(j=0;j<n;j++)
                {
                    cout<<"1 ";
                }
                cout<<endl;
            }
        }
        else
        {
            bool ok=1;
            for(i=0;i<n;i++)
            {
                for(j=0;j<n;j++)
                {
                    if(i==n-1&&ok) cout<<"1 ",ok=0;
                    else if(i==j) cout<<"1 ";
                    else if(j==(i+1)) cout<<"1 ";
                    else cout<<"0 ";
                }
                cout<<endl;
            }
        }
    }

    return 0;
}

/* stuff you should look for
	* int overflow, array bounds
	* special cases (n=1?)
	* do smth instead of nothing and stay organized
	* WRITE STUFF DOWN
	* DON'T GET STUCK ON ONE APPROACH
*/
