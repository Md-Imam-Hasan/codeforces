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
    int n, i, cnt, ans = 0, c0 = 0, c1 = 0, c2 = 0;
    cin >> n;
    int a[n];

    for (i = 0; i < n; i++)
    {
      cin >> a[i];
      if (a[i] % 3 == 0)
        c0++;
      else if (a[i] % 3 == 1)
        c1++;
      else
        c2++;
    }
    cnt = (c0 + c1 + c2) / 3;
    if (c0 > cnt)
    {
      if (c1 > cnt)
        ans = abs(cnt - c1) + abs(cnt - c0) * 2;
      else if (c2 > cnt)
        ans = abs(cnt - c0) + abs(cnt - c2) * 2;
      else
        ans = (cnt - c1) + (cnt - c2) * 2;
    }
    else if (c1 > cnt)
    {
      if (c2 > cnt)
        ans = abs(cnt - c2) + abs(cnt - c1) * 2;
      else if (c0 > cnt)
        ans = abs(cnt - c1) + abs(cnt - c0) * 2;
      else
        ans = (cnt - c2) + (cnt - c0) * 2;
    }
    else if (c2 > cnt)
    {
      if (c0 > cnt)
        ans = abs(cnt - c0) + abs(cnt - c2) * 2;
      else if (c1 > cnt)
        ans = abs(cnt - c2) + abs(cnt - c1) * 2;
      else
        ans = (cnt - c0) + (cnt - c1) * 2;
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
