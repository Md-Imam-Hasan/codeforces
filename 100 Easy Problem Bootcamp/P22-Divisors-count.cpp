#include <bits/stdc++.h>
#define ll long long
#define fast_io                 \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);
const double pi = 2.0 * acos(0.0);
// ok

using namespace std;

///Code starts from here

int numberOfDivisors(ll n)
{
	int cnt = 0, send = 1, i;

	if (n % 2 == 0)
	{
		while (n % 2 == 0)
		{
			n /= 2;
			cnt++;
		}
		send *= (cnt + 1);
		cnt = 0;
	}

	for (i = 3; i * i <= n; i += 2)
	{
		while (n % i == 0)
		{
			n /= i;
			cnt++;
		}
		send *= (cnt + 1);
		cnt = 0;
	}

	if (n > 2) send *= 2;

	return send;
}

int main()
{
	fast_io;
	int n, ans = 1;
	cin >> n;
	for (int i = 2; i <= n; i++)
	{
		ans += numberOfDivisors(i);
	}

	cout << numberOfDivisors(976197352729) << "\n";

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