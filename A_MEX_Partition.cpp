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
    int n, ans = 0;
    bool yes = 0;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
    }
    sort(a, a + n);

    for (int i = 0; i < n; i++)
    {
      if (a[i] == ans)
      {
        ans++;
      }
      else if (a[i] > ans)
      {
        cout << ans << "\n";
        yes = 1;
        break;
      }
    }
    if (!yes)
      cout << ans << "\n";
  }
  return 0;
}