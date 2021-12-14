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
	string s1, s2;
	bool yes = 1;

	cin >> s1 >> s2;

	transform(s1.begin(), s1.end(), s1.begin(), ::toupper);
	transform(s2.begin(), s2.end(), s2.begin(), ::toupper);

	for (int i = 0; i < s1.length(); i++)
	{
		if (s1[i] > s2[i])
		{
			cout << 1 << "\n";
			yes = 0;
			break;
		}
		else if (s1[i] < s2[i])
		{
			cout << -1 << "\n";
			yes = 0;
			break;
		}
	}

	if (yes)
	{
		cout << 0 << "\n";
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