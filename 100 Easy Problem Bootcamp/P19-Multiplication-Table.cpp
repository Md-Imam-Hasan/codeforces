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
	int n, x, i, j, ans = 0;
	cin >> x >> n;

	std::vector<pair<int, int>> v;

	for (i = 1; i * i <= n; i++)
	{
		if (n % i == 0)
		{
			v.push_back(make_pair(i, n / i));

		}
	}

	for (i = 0; i < v.size(); i++)
	{
		if (v[i].first <= x && v[i].second <= x)
		{
			if (v[i].first == v[i].second) ans++;
			else ans += 2;
		}
	}

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