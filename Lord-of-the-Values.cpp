#include <bits/stdc++.h>
#define ll long long
#define fast_io                 \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);
const double pi = 2.0 * acos(0.0);
// ok

using namespace std;

///Code starts from here
struct Test
{
  int x, y, z;
};

int main()
{
  fast_io;
  int t, kase = 1;
  cin >> t;
  while (t--)
  {
    int n, i, p, q;
    cin >> n;
    int a[n], target[n];
    vector<Test> v;
    for (i = 0; i < n; i++)
    {
      cin >> a[i];
      target[i] = a[i] * (-1);
    }

    for (i = 0; i < n; i += 2)
    {
      p = a[i], q = a[i + 1];
      v.push_back({1, i + 1, i + 2});
      p = p + q;
      v.push_back({2, i + 1, i + 2});
      q = q - p;
      while (p != target[i] || q != target[i + 1])
      {
        if (q - p == target[i + 1] && q != target[i + 1])
        {
          q = q - p;
          v.push_back({2, i + 1, i + 2});
        }
        else
        {
          p = p + q;
          v.push_back({1, i + 1, i + 2});
        }
      }
    }
    cout << v.size() << "\n";
    for (i = 0; i < v.size(); i++)
    {
      cout << v[i].x << " " << v[i].y << " " << v[i].z << "\n";
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
