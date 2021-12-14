#include <bits/stdc++.h>
#define fast_io                 \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);
const double pi = 2.0 * acos(0.0);
int a[200005], b[200005], c[200005], d[200005];

using namespace std;

///Code starts from here
int main()
{
	fast_io;
	int N, Q, x, y, i, j, k;
	cin >> N >> Q;

	for (i = 0; i < Q; i++)
	{
		cin >> x >> y;
		if (a[x] || b[y] || c[x + y] || d[x - y + N])
			cout << "NO\n";
		else
		{
			cout << "YES\n";
			a[x] = b[y] = c[x + y] = d[x - y + N] = 1;
		}
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