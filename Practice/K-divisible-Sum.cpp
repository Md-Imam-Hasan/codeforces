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
    int n, k, ans;
    cin >> n >> k;
    if (k >= n)
    {
      if (k % n)
        ans = k / n + 1;
      else
        ans = k / n;
    }
    else
    {
      if (n % k)
      {
        ans = n / k + 1;
        k *= ans;
        ans = k / n + 1;
      }
      else
        ans = 1;
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
