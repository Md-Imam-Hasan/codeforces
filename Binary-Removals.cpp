#include <bits/stdc++.h>
#define ll long long
#define fast_io                 \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);
const double pi = 2.0 * acos(0.0);
// ok

using namespace std;

///Code starts from here

bool Checker(string s, char c)
{
  for (int i = 0; i < s.length() - 1; i++)
  {
    if (s[i] == c && s[i] == s[i + 1])
      return true;
  }
  return false;
}

int main()
{
  fast_io;
  int t, kase = 1;
  cin >> t;
  while (t--)
  {
    string s;
    cin >> s;
    bool zeroChecker = Checker(s, '0'), oneChecker = Checker(s, '1'), ans = 1, one = 0;

    if (zeroChecker && !oneChecker)
      ans = 1;
    else if (!zeroChecker && oneChecker)
      ans = 1;
    else
    {
      for (int i = 0; i < s.length() - 1; i++)
      {
        if (!one)
        {
          if (s[i] == '1' && s[i] == s[i + 1])
            one = 1;
        }
        if (one)
        {
          if (s[i] == '0' && s[i] == s[i + 1])
          {
            ans = 0;
            break;
          }
        }
      }
    }

    ans ? cout << "YES\n" : cout << "NO\n";
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
