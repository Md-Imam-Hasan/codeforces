#include <bits/stdc++.h>
#define ll long long
#define fast_io                 \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);
const double pi = 2.0 * acos(0.0);
// ok

using namespace std;

///Code starts from here
bool checkComposite(int n)
{
	for (int i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
			return true;
	}

	return false;
}
int main()
{
	fast_io;
	int n, a, b = 8, i;
	cin >> n;
	a = b + n;

	while (!checkComposite(a) || !checkComposite(b))
	{
		a++, b++;
	}

	cout << a << " " << b << "\n";

	return 0;
}

/* stuff you should look for
  * int overflow, array bounds
  * special cases (n=1?)
  * do smth instead of nothing and stay organized
  * WRITE STUFF DOWN
  * DON'T GET STUCK ON ONE APPROACH
*/