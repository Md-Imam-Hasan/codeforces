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
    int n, i, ans = 0;
    bool b = 0;
    cin >> n;
    int a[n];
    vector<int> v;

    for (i = 0; i < n; i++)
    {
      cin >> a[i];
    }
    for (i = n - 1; i >= 0; i--)
    {
      ans = max(ans, a[i]);
      if (ans)
      {
        v.push_back(1);
        ans--;
      }
      else
      {
        v.push_back(0);
      }
    }
    for (i = n - 1; i >= 0; i--)
    {
      cout << v[i] << " ";
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
