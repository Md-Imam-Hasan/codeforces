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
    int n, i, cnt, remain;
    cin >> n;
    bool temp = 1;
    if (n < 2020)
    {
      temp = 0;
    }
    else
    {
      remain = n % 2020;
      cnt = n / 2020;
      if (remain > cnt)
        temp = 0;
    }
    temp ? cout << "YES\n" : cout << "NO\n";
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
