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
    int n, m, i, ans = 0;
    cin >> n >> m;
    string a;

    cin >> a;

    vector<int> v(7, 0);

    for (i = 0; i < n; i++)
    {
      v[a[i] - 65]++;
    }
    for (i = 0; i < 7; i++)
    {
      if (v[i] < m)
      {
        ans += (m - v[i]);
      }
    }
    cout << ans << "\n";
  }
  return 0;
}