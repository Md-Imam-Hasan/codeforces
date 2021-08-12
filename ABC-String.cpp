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
    int n, i, k, cnt = 0, a = 0, b = 0, c = 0;
    string s, ans;
    cin >> s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    char ch = s[0];

    for (i = 0; i < s.length(); i++)
    {
      if (s[i] == 'a')
        a++;
      else if (s[i] == 'b')
        b++;
      else
        c++;
    }
    if (a == b + c)
    {
      if (ch == 'a')
      {
        for (i = 0; i < s.length(); i++)
        {
          if (s[i] == ch && cnt >= 0)
            cnt++;
          else
            cnt--;
        }
      }
      else
      {
        for (i = 0; i < s.length(); i++)
        {
          if (s[i] == 'a' && cnt > 0)
            cnt--;
          else
            cnt++;
        }
      }
    }
    else if (b == a + c)
    {
      if (ch == 'b')
      {
        for (i = 0; i < s.length(); i++)
        {
          if (s[i] == ch && cnt >= 0)
            cnt++;
          else
            cnt--;
        }
      }
      else
      {
        for (i = 0; i < s.length(); i++)
        {
          if (s[i] == 'b' && cnt > 0)
            cnt--;
          else
            cnt++;
        }
      }
    }
    else if (c == b + a)
    {
      if (ch == 'c')
      {
        for (i = 0; i < s.length(); i++)
        {
          if (s[i] == ch && cnt >= 0)
            cnt++;
          else
            cnt--;
        }
      }
      else
      {
        for (i = 0; i < s.length(); i++)
        {
          if (s[i] == 'c' && cnt > 0)
            cnt--;
          else
            cnt++;
        }
      }
    }
    else
      cnt = 1;
    cnt ? ans = "NO" : ans = "YES";

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
