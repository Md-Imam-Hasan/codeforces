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
  int q, kase = 1;
  cin >> q;
  while (q--)
  {
    string s, t, ans, temp1, temp2;
    cin >> s >> t;
    int sl, tl, lcm, i;
    sl = s.length();
    tl = t.length();
    lcm = (sl * tl) / (__gcd(sl, tl));

    temp1 = makeString(s, lcm / sl);
    temp2 = makeString(t, lcm / tl);

    if (temp1 == temp2)
      cout << temp1 << "\n";
    else
      cout << "-1\n";
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
