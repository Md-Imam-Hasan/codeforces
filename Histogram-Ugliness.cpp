#include <bits/stdc++.h>
#define ll long long
#define fast_io                 \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);
const double pi = 2.0 * acos(0.0);
// ok

using namespace std;

///Code starts from here
string makeString(string s, int n)
{
  string res = "";
  for (int i = 1; i <= n; i++)
  {
    res += s;
  }
  return res;
}

int main()
{
  fast_io;
  int t, kase = 1;
  cin >> t;
  while (t--)
  {
    ll n, i, k, ans = 0;
    cin >> n;
    ll a[n + 2];
    a[0] = 0, a[n + 1] = 0;
    for (i = 1; i <= n; i++)
    {
      cin >> a[i];
    }
    for (i = 1; i <= n; i++)
    {
      if (a[i] > a[i - 1] && a[i] > a[i + 1])
      {
        k = max(a[i - 1], a[i + 1]);
        ans += (a[i] - k);
        a[i] = k;
      }
    }
    for (i = 1; i <= n + 1; i++)
    {
      ans += (abs(a[i] - a[i - 1]));
      // cout << a[i] << " ";
    }
    // cout << "\n";
    // ans += a[n];

    cout << ans << "\n";
  }

  return 0;
}

/* stuff you should look for
	* int overflow, array bounds
	* special cases (n=1?)
	* do smth instead of nothing and stay organized
	* WRITE STUFF DOWN
	* DON'T GET STUCK ON ONE APPROACH
*/
