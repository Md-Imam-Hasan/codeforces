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
    ll n, x, i, sum = 0, cnt = 0, mncnt;
    cin >> n >> x;
    bool temp = 0;
    int p;

    for (i = 0; i < n; i++)
    {
      cin >> p;
      cnt += p % x ? (p / x) + 1 : (p / x);
      sum += p;
    }
    mncnt = sum % x ? (sum / x) + 1 : (sum / x);

    cout << mncnt << " " << cnt << "\n";
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
