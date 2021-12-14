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
	cin >> s;
	int i;
	std::vector<int> v;

	for (i = 0; i < s.length(); i += 2)
	{
		v.push_back(s[i] - '0');
	}
	sort(v.begin(), v.end());

	for (i = 0; i < v.size() - 1; i++)
	{
		cout << v[i] << "+";
	}
	cout << v[v.size() - 1] << "\n";

	return 0;
}

/* stuff you should look for
  * int overflow, array bounds
  * special cases (n=1?)
  * do smth instead of nothing and stay organized
  * WRITE STUFF DOWN
  * DON'T GET STUCK ON ONE APPROACH
*/