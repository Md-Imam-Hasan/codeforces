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
  int t = 1, kase = 1;
  while (t--)
  {
    int n, i, j, p, q;
    cin >> n >> q;
    int x, b[q], ans[q];
    vector<pair<int, int>> v;
    vector<bool> vc(60);
    for (i = 0; i < n; i++)
    {
      cin >> x;
      if (!vc[x])
      {
        v.push_back(make_pair(i + 1, x));
        vc[x] = 1;
      }
    }
    for (i = 0; i < q; i++)
    {
      cin >> b[i];
    }
    for (i = 0; i < q; i++)
    {
      for (j = 0; j < v.size(); j++)
      {
        if (v[j].second == b[i])
        {
          ans[i] = v[j].first;
          v[j].first = 1;
          sort(v.begin(), v.end());
          break;
        }
        else
        {
          v[j].first += 1;
        }
      }
    }
    for (i = 0; i < q; i++)
    {
      cout << ans[i] << " ";
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
