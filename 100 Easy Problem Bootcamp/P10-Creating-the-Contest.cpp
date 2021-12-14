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
	int n, i, ans = 0, cnt = 0;
	bool yes = 1;
	cin >> n;

	int a[n];
	vector<int> v;

	for (i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	for (i = 1; i < n; i++)
	{
		if (a[i] <= a[i - 1] * 2)
		{
			cnt++;
			ans = max(ans, cnt);
		}
		else cnt = 0;
	}

	cout << ans + 1 << "\n";

	return 0;
}

/* stuff you should look for
  * int overflow, array bounds
  * special cases (n=1?)
  * do smth instead of nothing and stay organized
  * WRITE STUFF DOWN
  * DON'T GET STUCK ON ONE APPROACH
*/