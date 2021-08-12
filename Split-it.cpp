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
    int n, i, k;
    int b = 0;
    cin >> n >> k;
    string s, str, ans;
    cin >> s;
    str = s;
    reverse(str.begin(), str.end());

    if (str == s && k)
    {
      if (n % 2)
      {
        ans = "YES";
      }
      else if (n / 2 == k)
      {
        ans = "NO";
      }
      else
      {
        ans = "YES";
      }
    }
    else if (!k)
    {
      ans = "YES";
    }
    else
    {
      for (i = 0; i < n; i++)
      {
        if (s[i] == str[i])
        {
          b++;
        }
        else
          break;
      }
      if (k <= b)
      {
        ans = "YES";
      }
      else
        ans = "NO";
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
