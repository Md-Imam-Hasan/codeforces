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
  int q, kase = 1;
  cin >> q;
  while (q--)
  {
    int n, i, T = 0, M = 0, c = 0;
    cin >> n;
    string s;
    cin >> s;
    for (i = 0; i < n; i++)
    {
      if (s[i] == 'T')
        T++, c++;
      if (s[i] == 'M')
        M++, c--;
      if (c < 0 || c > n / 3)
        break;
    }
    if (T == 2 * M && s[0] != 'M' && s[n - 1] != 'M' && c == n / 3)
    {
      cout << "YES\n";
    }
    else
      cout << "NO\n";
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
