#include <bits/stdc++.h>
#define ll long long
#define fast_io                 \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);
const double pi = 2.0 * acos(0.0);
// ok
using namespace std;
/// Code starts from here


int main()
{
  fast_io;
  int t, kase = 1;
  cin >> t;
  while (t--)
  {
    int n, i, x = 1;
    cin >> n;
    bool yes = 1;
    ll a[n];
    for (i = 0; i < n; i++)
    {
      cin >> a[i];
    }
    vector<int> v;
    v.push_back(x);

    for(i=1;i<n;i++){
      ll temp = a[i]-a[i-1];
      if(temp>=1){
        if(size(v)>=temp){
          v.push_back(v[size(v)-temp]);
        }
        else{
          x++;
          v.push_back(x);
        }
      }
    }

    for(i=0;i<n;i++){
      cout<<v[i]<<" ";
    }
    cout<<"\n";
  }
  return 0;
}