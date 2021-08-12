#include <bits/stdc++.h>
#define ll long long
#define fast_io                 \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);
const double pi = 2.0 * acos(0.0);
// ok

using namespace std;

///Code starts from here

int checkPow(int x, int target)
{
  int cnt = 0;
  while (target)
  {
    target /= x;
    cnt++;
  }
  return cnt;
}

int main()
{
  fast_io;
  int t, kase = 1;
  cin >> t;
  while (t--)
  {
    ll a, b, ans = INT_MAX, loop = 20, i = 0, cnt;
    cin >> a >> b;

    if (a < b)
      ans = 1;
    else if (a < b * 2)
      ans = 2;
    else
    {
      if (b == 1)
        i = 1;
      while (loop--)
      {
        cnt = i + checkPow(b + i, a);
        i++;
        // cout << "I: " << i << " " << cnt << "\n";
        ans = min(ans, cnt);
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
