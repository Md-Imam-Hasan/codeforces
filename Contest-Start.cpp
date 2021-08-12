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
  int q, kase = 1;
  cin >> q;
  while (q--)
  {
    ll n, x, t, cnt, ans;
    cin >> n >> x >> t;
    cnt = min(t / x, n - 1);
    ans = (cnt * (cnt - 1) / 2) + (n - cnt) * cnt;
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
