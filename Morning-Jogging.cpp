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
    int n, m, i, j, it, temp, k;
    cin >> n >> m;
    int a[n][m];
    vector<int> vp;
    bool visit[n][m], swaped;

    for (i = 0; i < n; i++)
    {
      for (j = 0; j < m; j++)
      {
        cin >> a[i][j];
        vp.push_back(a[i][j]);
        visit[i][j] = 0;
      }
    }
    sort(vp.begin(), vp.end());
    for (it = 0; it < m; it++)
    {
      temp = vp[it];
      swaped = 0;
      for (i = 0; i < n && !swaped; i++)
      {
        for (j = 0; j < m && !swaped; j++)
        {
          if (a[i][j] == temp && !visit[i][j])
          {
            swap(a[i][j], a[i][it]);
            swaped = 1;
            visit[i][it] = 1;
          }
        }
      }
    }
    for (i = 0; i < n; i++)
    {
      for (j = 0; j < m; j++)
      {
        cout << a[i][j] << " ";
      }
      cout << "\n";
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
