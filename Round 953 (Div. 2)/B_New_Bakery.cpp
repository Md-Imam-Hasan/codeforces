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
    ll n, a, b, k = 0, ans = 0, x, y, z;
    cin >> n >> a >> b;
    bool yes = 1;
    if (b > a)
    {
      k = min(b - a, min(n, b));
    }
    if (k > 0)
    {
      ans += (k * (2 * b - (k - 1))) / 2;
    }
    // cout << ans << " ";
    ans += (n - k) * a;

    cout << ans << "\n";
  }
  return 0;
}