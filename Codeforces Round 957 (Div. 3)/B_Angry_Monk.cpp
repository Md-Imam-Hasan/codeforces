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
    int n, m, i, j, k, ans = 0, sum = 0, x;
    cin >> n >> k;
    vector<int> v;

    for (i = 0; i < k; i++)
    {
      cin >> x;
      v.push_back(x);
    }
    sort(v.begin(), v.end());

    int mx = *max_element(v.begin(), v.end());

    for (i = 0; i < k - 1; i++)
    {
      ans += v[i] - 1;
      sum += v[i];
    }
    ans += sum;

    cout << ans << "\n";
  }
  return 0;
}