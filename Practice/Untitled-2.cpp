#include <bits/stdc++.h>
#define ll long long
#define fast_io                 \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);
const double pi = 2.0 * acos(0.0);
// ok

using namespace std;

///Code starts from here
int main()
{
  fast_io;
  int t, kase = 1;
  cin >> t;
  while (t--)
  {
    int n, i;
    ll ans = 0;
    cin >> n;
    int a[n];
    map<ll, ll> mp;
    map<ll, ll>::iterator itr;
    for (i = 0; i < n; i++)
    {
      cin >> a[i];
      a[i] -= i;
    }
    for (i = 0; i < n; i++)
    {
      mp[a[i]]++;
    }
    for (itr = mp.begin(); itr != mp.end(); ++itr)
    {
      if (itr->second > 1)
      {
        ans += ((itr->second - 1) * (itr->second)) / 2;
      }
    }

    cout << ans << "\n";
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
