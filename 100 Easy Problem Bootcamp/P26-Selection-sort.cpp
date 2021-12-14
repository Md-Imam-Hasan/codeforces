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
	int n, i, j, k;
	cin >> n;
	int a[n];

	for (i = 0; i < n; i++) cin >> a[i];

	for (i = 0; i < n - 1; i++)
	{
		k = i;
		for (j = i + 1; j < n; j++)
		{
			if (a[j] < a[k]) k = j;
		}
		int temp = a[i];
		a[i] = a[k];
		a[k] = temp;
		for (k = 0; k < n; k++) cout << a[k] << " ";
		cout << "\n";
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