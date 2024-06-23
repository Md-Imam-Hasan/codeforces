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
    int n, m, i, x;
    cin >> n >> m;
    string s, c, ans = "";
    cin >> s;
    vector<int> a;

    for (i = 0; i < m; i++)
    {
      cin >> x;
      a.push_back(x);
    }
    cin >> c;
    sort(a.begin(), a.end());

    sort(c.begin(), c.end());
    int cnt = 0;

    for (i = 0; i < m; i++)
    {
      if (a[i] == a[i - 1] && i > 0)
        continue;
      ;
      s[a[i] - 1] = c[cnt];
      cnt++;
    }

    cout << s << "\n";
  }
  return 0;
}