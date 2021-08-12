#include <bits/stdc++.h>
#define ll long long

using namespace std;
vector<int>v;

void divisors(int n)
{
    // Note that this loop runs till square root
    for (int i=1; i<=sqrt(n); i++)
    {
        if (n%i == 0)
        {
            // If divisors are equal, print only one
            if (n/i == i)
                v.push_back(i);

            else // Otherwise print both
            {
                v.push_back(i);
                v.push_back(n/i);
            }

        }
    }
}

///Code starts from here
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        ll n,i,j,k;
        cin>>n>>k;

        if(k>=n) cout<<"1";
        else
        {

                divisors(n);
                sort(v.begin(),v.end());
                for(i=v.size()-1;i>=0;i--)
                {
                    if(v[i]<=k)
                    {
                        break;
                    }
                }
                cout<<n/v[i];
            v.clear();
        }
        if(t) cout<<"\n";
    }

    return 0;
}

