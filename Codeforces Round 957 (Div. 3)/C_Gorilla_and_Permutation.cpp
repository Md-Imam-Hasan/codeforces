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
    int n, m, i, j, k;
    cin >> n >> m >> k;
    vector<int> v, w;

    for (i = 1; i <= m; i++)
    {
      v.push_back(i);
    }
    for (; i <= n; i++)
    {
      w.push_back(i);
    }
    reverse(w.begin(), w.end());
    for (j = 0; j < v.size(); j++)
    {
      w.push_back(v[j]);
    }

    for (j = 0; j < w.size(); j++)
    {
      cout << w[j] << " ";
    }
    cout << "\n";
  }
  return 0;
}