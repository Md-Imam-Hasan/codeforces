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
    int n, m, i, j, k, ans = 0, x, y, z;
    cin >> n;
    bool yes = 1;
    int a[n];
    vector<int> v;

    for (i = 0; i < n; i++)
    {
      cin >> a[i];
      if (i == n - 1)
      {
        x = a[i];
      }
    }

    for (i = 0; i < n - 1; i++)
    {
      ans = max(x + a[i], ans);
    }

    cout << ans << "\n";
  }
  return 0;
}