#include <bits/stdc++.h>
#define ll long long
#define fast_io                 \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);
const double pi = 2.0 * acos(0.0);
// ok
using namespace std;
/// Code starts from here
bool canConstruct(string s, string target)
{
  int s_len = s.length();
  int t_len = target.length();

  // Construct a string by repeating `s` enough times
  string repeated_s = "";
  while (repeated_s.length() < t_len)
  {
    repeated_s += s;
  }

  // Append `s` one more time to handle edge cases where the overlap might occur at the boundary
  repeated_s += s;

  // Check if `target` is a substring of the extended `repeated_s`
  return repeated_s.find(target) != string::npos;
}
int main()
{
  fast_io;
  int t, kase = 1;
  cin >> t;
  while (t--)
  {
    ll n, i, j;
    cin >> n;
    string s = to_string(n);
    // cout << "Case " << s << ": ";
    vector<pair<ll, ll>> vp;
    for (i = n; i <= 1000; i++)
    {
      ll mn = 10000;
      ll tobe = min(mn, i * n);
      for (j = 1; j <= tobe; j++)
      {
        ll temp = i * n - j;
        string s1 = to_string(temp);
        bool flag = true;
        // bool flag = canConstruct(s, s1);
        if (flag)
        {
          vp.push_back({i, j});
        }
      }
      // break;
    }
    cout << vp.size() << "\n";
    for (i = 0; i < vp.size(); i++)
    {
      cout << vp[i].first << " " << vp[i].second << "\n";
    }
  }
  return 0;
}