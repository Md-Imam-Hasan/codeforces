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
	int n, i, j, ans, l, r;
	bool yes = 1, start = 0, end = 0;
	cin >> n;

	int a[n], b[n];
	vector<int> v;

	for (i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	for (i = 1; i < n; i++)
	{
		if (a[i] < a[i - 1])
		{
			yes = 0;
			break;
		}
	}

	if (yes)
	{
		cout << "yes\n";
		cout << "1 1\n";
		return 0;
	}
	else yes = 1;

	for (i = 1; i < n; i++)
	{
		if (a[i] < a[i - 1] && !start)
		{
			l = i;
			start = 1;
		}
		else if (a[i] > a[i - 1] && !end && start)
		{
			end = 1;
			start = 0;
			r = i;
		}
	}
	if (start)
		r = n;

	for (int i = 0; i < n; ++i)
		b[i] = a[i];

	for (i = r - 1, j = l - 1; i >= l - 1; i--, j++)
	{
		b[i] = a[j];
	}

	for (i = 1; i < n; i++)
	{
		if (b[i] < b[i - 1])
		{
			yes = 0;
			break;
		}
	}
	if (yes)
	{
		cout << "yes\n";
		cout << l << " " << r << "\n";
	}
	else cout << "no\n";



	return 0;
}

/* stuff you should look for
  * int overflow, array bounds
  * special cases (n=1?)
  * do smth instead of nothing and stay organized
  * WRITE STUFF DOWN
  * DON'T GET STUCK ON ONE APPROACH
*/