#include <bits/stdc++.h>
#define ll long long
#define fast_io                 \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);
const double pi = 2.0 * acos(0.0);
// ok
using namespace std;
/// Code starts from here

bool sortbyfirstthensec(const pair<int, int> &a, const pair<int, int> &b)
{
  return (a.first <= b.first && a.second > b.second);
}
int main()
{
  fast_io;
  int t, kase = 1;
  cin >> t;
  while (t--)
  {
    int n, m, i, j, k, mxI = 0, x, y, z;
    cin >> n;
    bool yes = 1;
    int a[n], b[n];
    vector<int> v;

    for (i = 0; i < n; i++)
    {
      cin >> a[i];
    }
    for (i = 0; i < n; i++)
    {
      cin >> b[i];
      if (a[i] != b[i])
      {
        v.push_back(b[i]);
      }
    }
    sort(v.begin(), v.end());

    cin >> m;
    vector<pair<int, int>> vect;
    for (i = 0; i < m; i++)
    {
      cin >> x;
      vect.push_back(make_pair(x, i));
    }
    sort(vect.begin(), vect.end());
    j = -1;
    for (i = 0; i < v.size(); i++)
    {
      j++;
      yes = 0;
      for (; j < m; j++)
      {
        if (v[i] == vect[j].first)
        {
          mxI = max(mxI, vect[j].second);
          yes = 1;
          break;
        }
        else
        {
          yes = 0;
        }
      }
      if (!yes)
      {
        break;
      }
    }

    if (v.size() == 0)
    {
      cout << "YES\n";
    }
    else if (mxI == m - 1 && yes)
    {
      cout << "YES\n";
    }
    else
    {
      cout << "NO\n";
    }
  }
  return 0;
}