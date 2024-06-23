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
    int n, m, i, cnt, ans = 0;
    cin >> n;
    cnt = n - 2;
    string s;
    cin >> s;

    if (n == 2)
      cout << stoi(s) << "\n";
    else
    {
      for (i = 0; i < n; i++)
      {
        if ((s[i] == '1' || s[i] == '0') && cnt > 1)
        {
          ans *= (s[i] - '0');
          cnt--;
        } else if()
      }
    }
  }
  return 0;
}