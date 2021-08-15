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
    int n, i, k, star = 0, ans, temp1 = 0, temp2 = 0, mn = INT_MAX, mx = 0;
    cin >> n >> k;
    string s, s1;
    cin >> s;
    for (i = 0; i < n; i++)
    {
      if (s[i] == '*')
      {
        star++;
        mn = min(mn, i);
        mx = max(mx, i);
      }
    }
    if (star <= 2)
      ans = star;
    else
    {
      star = mn;
      s[mn] = 'X', s[mx] = 'X';
      s1 = s;
      while (mn + k < mx)
      {
        i = k;
        while (i > 0)
        {
          if (s1[mn + i] == '*')
          {
            s1[mn + i] = 'X';
            temp1++;
            // cout << "temp1: " << temp1 << " \n";
            mn += i;
            break;
          }
          i--;
        }
      }
      s1 = s;
      mn = star;
      while (mx - k > mn)
      {
        i = k;
        while (i > 0)
        {
          if (s1[mx - i] == '*')
          {
            s1[mx - i] = 'X';
            temp2++;
            // cout << "temp2: " << temp2 << " \n";
            mx -= i;
            break;
          }
          i--;
        }
      }
      ans = 2 + min(temp1, temp2);
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
