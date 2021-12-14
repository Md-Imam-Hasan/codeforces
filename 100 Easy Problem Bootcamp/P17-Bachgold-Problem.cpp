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
	int n, i, j;
	cin >> n;

	if (n % 2 == 0)
	{
		cout << n / 2 << "\n";
		for (i = 1; i <= n / 2; i++)
		{
			cout << "2 ";
		}
		cout << "\n";
	}
	else {
		cout << n / 2 << "\n";
		for (i = 1; i < n / 2; i++)
		{
			cout << "2 ";
		}
		cout << "3\n";
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