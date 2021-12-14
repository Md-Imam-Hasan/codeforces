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
		int n, i, ans;

		cin >> n;

		string s[n];
		// vector<int> v;

		for (i = 0; i < n; i++)
		{
			cin >> s[i];
		}

		for (i = 0; i < n; i++)
		{
			if (s[i].length() > 10)
			{
				ans = s[i].length();
				cout << s[i][0] << ans - 2 << s[i][ans - 1];
			}
			else {
				cout << s[i];
			}
			cout << "\n";
		}

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