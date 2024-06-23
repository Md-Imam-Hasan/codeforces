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
    int n, m, i, j, k, ans, x1, x2, x3, mn = INT_MAX;
    cin >> x1 >> x2 >> x3;

    for (i = 1; i <= 10; i++)
    {
      int sum = abs(x1 - i) + abs(x2 - i) + abs(x3 - i);
      mn = min(mn, sum);
    }
    cout << mn << "\n";
  }
  return 0;
}