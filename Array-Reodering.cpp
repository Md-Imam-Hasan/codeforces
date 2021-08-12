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
    int n, i, j, x, ans = 0;
    cin >> n;
    vector<int> v;

    for (i = 0; i < n; i++)
    {
      cin >> x;
      if (x % 2 == 0)
      {
        v.insert(v.begin(), x);
      }
      else
      {
        v.push_back(x);
      }
    }

    for (i = 0; i < n; i++)
    {
      for (j = i + 1; j < n; j++)
      {
        if (__gcd(v[i], 2 * v[j]) > 1)
          ans++;
      }
    }

    cout << ans << "\n";
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
