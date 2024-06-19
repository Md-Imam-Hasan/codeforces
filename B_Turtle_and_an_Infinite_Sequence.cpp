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
    int n, m, p = 0;
    cin >> n >> m;
    while (p <= m)
    {
      if (n <= (1 << p))
        break;
      n = n | (1 << p);
      p++;
    }

    cout << n << "\n";
  }
  return 0;
}