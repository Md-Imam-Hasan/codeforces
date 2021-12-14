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
	std::vector<int> v, vt;
	bool yes = 1;

	for (i = 0; i < n; i++) cin >> a[i];

	for (i = 0; i < n; i++)
	{
		yes = 1;
		if (v.size() > 0)
		{
			vt = v;
			v.clear();
			for (j = 0; j < vt.size(); j++)
			{
				if (a[i] > vt[j] && yes)
				{
					v.push_back(a[i]);
					yes = 0;
					cout << v.size() << "\n";
				}
				v.push_back(vt[j]);
			}
			if (yes)
			{
				v.push_back(a[i]);
				cout << v.size() << "\n";
			}
		}
		else
		{
			v.push_back(a[i]);
			cout << "1\n";
		}
	}

	for (i = 0; i < v.size(); i++) cout << v[i] << " ";
	cout << "\n";

	return 0;
}

/* stuff you should look for
  * int overflow, array bounds
  * special cases (n=1?)
  * do smth instead of nothing and stay organized
  * WRITE STUFF DOWN
  * DON'T GET STUCK ON ONE APPROACH
*/