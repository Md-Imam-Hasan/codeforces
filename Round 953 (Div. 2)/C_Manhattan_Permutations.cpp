#include <bits/stdc++.h>
#define ll long long
#define fast_io                 \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);
using namespace std;

int main()
{
  fast_io;
  int t;
  cin >> t;
  while (t--)
  {
    ll n, k;
    cin >> n >> k;

    vector<ll> v(n), m(n);
    iota(v.begin(), v.end(), 1);
    iota(m.rbegin(), m.rend(), 1);

    ll maxK = 0;
    for (ll i = 0; i < n; ++i)
    {
      maxK += abs(m[i] - (i + 1));
    }

    bool yes = (maxK >= k && k % 2 == 0);
    ll y = 1;

    for (ll i = n - 1; i >= 0 && k > 0; --i)
    {
      ll value = 2 * abs(v[i] - y);
      if (value <= k)
      {
        swap(v[i], v[y - 1]);
        k -= value;
        ++y;
      }
    }

    if (k > 0 && !yes)
    {
      cout << "No";
    }
    else
    {
      cout << "Yes\n";
      for (const auto &val : v)
      {
        cout << val << " ";
      }
    }
    cout << "\n";
  }
  return 0;
}
