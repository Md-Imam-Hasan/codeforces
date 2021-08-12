#include <bits/stdc++.h>
#define ll long long
#define fast_io                 \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);
const double pi = 2.0 * acos(0.0);
// ok

using namespace std;

///Code starts from here

int LCSubStr(string X, string Y, int m, int n)
{
  // Create a table to store
  // lengths of longest
  // common suffixes of substrings.
  // Note that LCSuff[i][j] contains
  // length of longest common suffix
  // of X[0..i-1] and Y[0..j-1].

  int LCSuff[m + 1][n + 1];
  int result = 0; // To store length of the
                  // longest common substring

  /* Following steps build LCSuff[m+1][n+1] in
        bottom up fashion. */
  for (int i = 0; i <= m; i++)
  {
    for (int j = 0; j <= n; j++)
    {
      // The first row and first column
      // entries have no logical meaning,
      // they are used only for simplicity
      // of program
      if (i == 0 || j == 0)
        LCSuff[i][j] = 0;

      else if (X[i - 1] == Y[j - 1])
      {
        LCSuff[i][j] = LCSuff[i - 1][j - 1] + 1;
        result = max(result, LCSuff[i][j]);
      }
      else
        LCSuff[i][j] = 0;
    }
  }
  return result;
}
int main()
{
  fast_io;
  int t, kase = 1;
  cin >> t;
  while (t--)
  {
    string a, b;
    cin >> a >> b;
    int cnt = LCSubStr(a, b, a.length(), b.length());
    cout << a.length() + b.length() - 2 * cnt << "\n";
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
