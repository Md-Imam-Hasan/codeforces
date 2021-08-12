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
  int n, i;
  ll k, x, temp, ans = 0, j;
  cin >> n >> k >> x;
  ll a[n];
  vector<ll> v;

  for (i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  if (n > 1)
  {
    sort(a, a + n);
    for (i = 0; i < n - 1; i++)
    {
      if (a[i + 1] - a[i] > x)
      {
        if ((a[i + 1] - a[i]) % x)
          temp = (a[i + 1] - a[i]) / x;
        else
          temp = ((a[i + 1] - a[i]) / x) - 1;
        v.push_back(temp);
      }
    }
  }
  j = 0;
  if (v.size())
  {
    sort(v.begin(), v.end());
    while (k)
    {
      if (k >= v[j])
      {
        k -= v[j];
        j++;
        if (j >= v.size())
          break;
      }
      else
        break;
    }
  }
  ans = v.size() - j + 1;

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
