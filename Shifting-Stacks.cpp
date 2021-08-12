#include <bits/stdc++.h>
#define ll long long
#define fast_io                 \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);
const double pi = 2.0 * acos(0.0);
// ok

using namespace std;

///Code starts from here
int main()
{
  fast_io;
  int t, kase = 1;
  cin >> t;
  while (t--)
  {
    ll n, i, k, ans = 0;
    cin >> n;
    bool b = 1;
    int a[n];

    for (i = 0; i < n; i++)
    {
      cin >> a[i];
    }

    for (i = 0; i < n; i++)
    {
      if (a[i] >= i)
      {
        ans += (a[i] - i);
      }
      else if (ans >= (i - a[i]))
      {
        ans -= (i - a[i]);
      }
      else
      {
        b = 0;
        break;
      }
    }

    b ? cout << "YES\n" : cout << "NO\n";
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
