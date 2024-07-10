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
    int n, f, i, k, cnt = 0, x, y, z;
    cin >> n >> f >> k;
    bool yes = 1;
    vector<int> a;

    for (i = 0; i < n; i++)
    {
      cin >> y;
      a.push_back(y);
    }
    x = a[f - 1];

    sort(a.begin(), a.end(), greater<int>());

    if (a[k - 1] > x)
    {
      cout << "NO\n";
    }
    else if (a[k - 1] < x || k == n)
    {
      cout << "YES\n";
    }
    else if (a[k - 1] == x)
    {
      if (a[k] == x)
      {
        cout << "MAYBE\n";
      }
      else
      {
        cout << "YES\n";
      }
    }
  }
  return 0;
}