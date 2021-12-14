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
	string s;
	cin >> s;
	int i, j, cnt = 0;

	for (i = 0; i < s.length(); i++)
	{
		if (s[i] == '4' || s[i] == '7')
		{
			cnt++;
		}
	}

	if (cnt == s.length())
	{
		cout << "YES\n";
	}
	else
	{
		int x = stoi(s);
		if (x % 4 == 0 || x % 7 == 0 || x % 47 == 0 || x % 74 == 0 || x % 447 == 0 || x % 474 == 0 || x % 744 == 0 || x % 747 == 0 || x % 774 == 0)
		{
			cout << "YES\n";
		}
		else cout << "NO\n";
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