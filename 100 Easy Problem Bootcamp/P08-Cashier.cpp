#include <bits/stdc++.h>
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
	int n, L, a, i, j, t, l, initial = 0, ans = 0;
	cin >> n >> L >> a;

	for (i = 0; i < n; i++)
	{
		cin >> t >> l;
		ans += (t - initial) / a;
		initial = t + l;
	}

	ans += (L - initial) / a;

	cout << ans << "\n";

	return 0;
}

/* stuff you should look for
  * int overflow, array bounds
  * special cases (n=1?)
  * do smth instead of nothing and stay organized
  * WRITE STUFF DOWN
  * DON'T GET STUCK ON ONE APPROACH
*/