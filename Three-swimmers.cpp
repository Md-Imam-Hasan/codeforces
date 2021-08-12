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
    ll p, a, b, c;
    ll x, y, z;
    cin >> p >> a >> b >> c;
    x = p % a == 0 ? p / a : (p / a) + 1;
    y = p % b == 0 ? p / b : (p / b) + 1;
    z = p % c == 0 ? p / c : (p / c) + 1;

    x = a * x - p;
    y = b * y - p;
    z = c * z - p;

    cout << min(min(x, y), z) << "\n";
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
