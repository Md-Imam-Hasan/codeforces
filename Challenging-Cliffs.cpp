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
  int t, kase = 1;
  cin >> t;
  while (t--)
  {
    int n, i, j, mn = INT_MAX;
    cin >> n;
    bool temp = 0;

    int a[n];

    for (i = 0; i < n; i++)
    {
      cin >> a[i];
    }
    sort(a, a + n);
    for (i = 0; i < n - 1; i++)
    {
      if (mn > abs(a[i] - a[i + 1]))
      {
        mn = abs(a[i] - a[i + 1]);
        j = i;
      }
    }

    if (n == 2)
    {
      for (i = 0; i < n; i++)
      {
        cout << a[i] << " ";
      }
    }
    else
    {
      for (i = j + 1; i < n; i++)
      {
        cout << a[i] << " ";
      }
      for (i = 0; i <= j; i++)
      {
        cout << a[i] << " ";
      }
    }
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
