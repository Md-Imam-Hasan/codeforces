#include <bits/stdc++.h>
#define ll long long
#define fast_io                 \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);
const double pi = 2.0 * acos(0.0);
// ok

using namespace std;

///Code starts from here

int isSubstring(string s1, string s2)
{
  int M = s1.length();
  int N = s2.length();

  /* A loop to slide pat[] one by one */
  for (int i = 0; i <= N - M; i++)
  {
    int j;

    /* For current index i, check for
 pattern match */
    for (j = 0; j < M; j++)
      if (s2[i + j] != s1[j])
        break;

    if (j == M)
      return i;
  }

  return -1;
}
int main()
{
  fast_io;
  int t, kase = 1;
  cin >> t;
  while (t--)
  {
    int n, i, j = 0, k, mx = 0;
    cin >> n;
    bool end = 1;
    string s, ans = "", temp = "";
    cin >> s;

    for (char c = 'a'; c <= 'z'; c++)
    {
      temp = c;
      if (isSubstring(temp, s) < 0)
      {
        ans = temp;
        break;
      }
    }
    if (ans == "")
    {
      for (char c = 'a'; c <= 'z'; c++)
      {
        for (char d = 'a'; d <= 'z'; d++)
        {
          temp = c;
          temp += d;
          if (isSubstring(temp, s) < 0)
          {
            ans = temp;
            break;
          }
        }
        if (ans != "")
          break;
      }
    }
    if (ans == "")
    {
      for (char c = 'a'; c <= 'z'; c++)
      {
        for (char d = 'a'; d <= 'z'; d++)
        {
          for (char e = 'a'; e <= 'z'; e++)
          {
            temp = c;
            temp += d;
            temp += e;
            if (isSubstring(temp, s) < 0)
            {
              ans = temp;
              break;
            }
          }
          if (ans != "")
            break;
        }
        if (ans != "")
          break;
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
