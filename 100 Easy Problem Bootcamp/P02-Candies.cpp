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
	int t = 1, kase = 1;
	// cin >> t;
	while (t--)
	{
		int n, i, ans = 0, A, B;
		// bool yes = 1;
		cin >> n;

		int a[n];
		// vector<int> v;

		for (i = 0; i < n; i++)
		{
			cin >> a[i];
		}

		cin >> A >> B;

		for (i = A; i <= B; i++)
		{
			ans += a[i];
		}

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