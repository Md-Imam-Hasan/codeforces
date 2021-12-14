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
	string s;
	int cnt = 1, mx = 0;
	cin >> s;

	for (int i = 1; i < s.length(); i++)
	{
		if (s[i] == s[i - 1])
		{
			cnt++;
			mx = max(mx, cnt);
		}
		else
		{
			cnt = 1;
			mx = max(mx, cnt);
		}
	}
	if (mx >= 7) cout << "YES\n";
	else cout << "NO\n";

	return 0;
}

/* stuff you should look for
  * int overflow, array bounds
  * special cases (n=1?)
  * do smth instead of nothing and stay organized
  * WRITE STUFF DOWN
  * DON'T GET STUCK ON ONE APPROACH
*/