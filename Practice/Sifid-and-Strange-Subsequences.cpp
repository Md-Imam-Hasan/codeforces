#include <bits/stdc++.h>
#define ll long long
#define fast_io                 \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);
const double pi = 2.0 * acos(0.0);
// ok

using namespace std;

///Code starts from here
string makeString(string s, int n)
{
  string res = "";
  for (int i = 1; i <= n; i++)
  {
    res += s;
  }
  return res;
}

int main()
{
  fast_io;
  int t, kase = 1;
  cin >> t;
  while (t--)
  {
    int n, i;
    cin >> n;
    int a[n];

    for (i = 0; i < n; i++)
    {
      cin >> a[i];
    }
    sort(a, a + n);
    int mx = a[n - 1], k = n;

    for (i = n - 2; i >= 0; i--)
    {
      while (abs(a[i] - a[i + 1]) < mx)
      {
        k--;
        mx = a[k - 1];
        if (k == i + 1)
          break;
      }
    }
    cout << k << "\n";
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
