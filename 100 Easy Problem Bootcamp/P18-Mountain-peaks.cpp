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
	int n, i, j, k, cnt = 0, ans = 0;
	cin >> n;
	int h[n];
	std::vector<int> v;
	bool yes = 0;

	for (i = 0; i < n; i++)
	{
		cin >> h[i];
	}

	if (n == 2)
	{
		cout << "0\n";
		return 0;
	}

	for (i = 1; i < n - 1; i++)
	{
		if (h[i] > h[i - 1] && h[i] > h[i + 1]) cnt++;
	}

	if (cnt == 0)
	{
		cout << "0\n";
		return 0;
	}

	for (i = 1; i * i <= n; i++)
	{
		if (n % i == 0)
		{
			if (n / i == i) v.push_back(i);
			else
			{
				v.push_back(i);
				v.push_back(n / i);
			}
		}
	}

	for (i = 0; i < v.size(); i++)
	{
		int l = n / v[i];
		yes = 0;
		for (j = 0; j < n; j += l)
		{
			yes = 0;
			for (k = j; k < j + l; k++)
			{
				if (k != 0 && k != n - 1)
				{
					if (h[k] > h[k - 1] && h[k] > h[k + 1])
					{
						yes = 1;
						break;
					}
				}
			}
			if (!yes) break;
		}
		if (yes)
		{
			ans = max(v[i], ans);
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