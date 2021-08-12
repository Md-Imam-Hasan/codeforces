#include <bits/stdc++.h>
#define ll long long
#define fast_io                 \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);
const double pi = 2.0 * acos(0.0);
// ok

using namespace std;

///Code starts from here

string add(char c, int n)
{
  string s = "";
  for (int i = 1; i <= n; i++)
  {
    s += c;
  }
  return s;
}

int main()
{
  fast_io;
  int t, kase = 1;
  cin >> t;
  while (t--)
  {
    int a, b, c;
    string x = "1", y = "1";
    cin >> a >> b >> c;
    x += add('0', a - 1);
    y += add('1', b - c);
    y += add('0', c - 1);

    cout << x << " " << y << "\n";
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
