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
    int n, m, i, j, k;
    bool b;
    cin >> n >> m;
    string s[n], s1[n], s2[n];

    for (i = 0; i < n; i++)
    {
      cin >> s[i];
      s1[i] = "";
      s2[i] = "";
    }

    for (i = 0; i < n; i++)
    {
      if (i % 2)
        b = 1;
      else
        b = 0;
      for (j = 0; j < m; j++)
      {
        if (b)
        {
          s1[i] += 'R';
          b = 0;
        }
        else
        {
          s1[i] += 'W';
          b = 1;
        }
      }
    }

    for (i = 0; i < n; i++)
    {
      if (i % 2)
        b = 0;
      else
        b = 1;
      for (j = 0; j < m; j++)
      {
        if (b)
        {
          s2[i] += 'R';
          b = 0;
        }
        else
        {
          s2[i] += 'W';
          b = 1;
        }
      }
    }

    bool b1 = 1, b2 = 1;
    for (i = 0; i < n && b1; i++)
    {
      for (j = 0; j < m && b1; j++)
      {
        if (s[i][j] != '.' && s[i][j] != s1[i][j])
        {
          b1 = 0;
          break;
        }
      }
    }
    for (i = 0; i < n && b2; i++)
    {
      for (j = 0; j < m && b2; j++)
      {
        if (s[i][j] != '.' && s[i][j] != s2[i][j])
        {
          b2 = 0;
          break;
        }
      }
    }
    if (b1)
    {
      cout << "YES\n";
      for (i = 0; i < n; i++)
      {
        cout << s1[i] << "\n";
      }
    }
    else if (b2)
    {
      cout << "YES\n";
      for (i = 0; i < n; i++)
      {
        cout << s2[i] << "\n";
      }
    }
    else
    {
      cout << "NO\n";
    }
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
