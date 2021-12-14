#include <bits/stdc++.h>
#define ll long long
#define fast_io                 \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);
const double pi = 2.0 * acos(0.0);
// ok

using namespace std;

///Code starts from here

int isPrime(int n) {
	if (n < 2) return 0;
	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0) {
			return 0;
		}
	}
	return 1;
}

bool checkTPrime(ll n)
{
	if (n % 2 == 0)
	{
		if (n == 4) return true;
		else return false;
	}
	else
	{
		ll i = sqrt(n);
		if (i * i == n && n != 1 && isPrime(i)) return true;
		else return false;
	}

}

int main()
{
	fast_io;
	int n, i;
	cin >> n;
	ll a[n];

	for (i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	for (i = 0; i < n; i++)
	{
		if (checkTPrime(a[i]))
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