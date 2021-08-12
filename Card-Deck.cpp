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
    int n, i, k, star = 0, ans = 0, temp1 = 0, temp2 = 0, mn = 0, mx = 0;
    cin >> n;
    int a[n];
    vector<string> v;
    string s;

    for (i = 0; i < n; i++)
    {
      cin >> a[i];
    }
    mx = a[0];
    s = to_string(mx) + " ";
    for (i = 1; i < n; i++)
    {
      if (a[i] > mx)
      {
        mx = a[i];
        v.push_back(s);
        s = to_string(mx) + " ";
      }
      else
      {
        s += to_string(a[i]) + " ";
      }
    }
    v.push_back(s);

    for (i = v.size() - 1; i >= 0; i--)
    {
      s = "";
      for (k = 0; k < v[i].length(); k++)
      {
        if (v[i][k] == ' ')
        {
          cout << s << " ";
          s = "";
        }
        else
        {
          s += v[i][k];
        }
      }
    }
    cout << "\n";
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
