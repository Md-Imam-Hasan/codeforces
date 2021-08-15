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
    ll A, B, n, i, k, attk, healthdec;
    cin >> A >> B >> n;
    bool temp = 1;
    ll a[n], b[n];
    vector<pair<ll, ll>> vp;

    for (i = 0; i < n; i++)
    {
      cin >> a[i];
    }

    for (i = 0; i < n; i++)
    {
      cin >> b[i];
    }

    for (i = 0; i < n; i++)
    {
      vp.push_back(make_pair(a[i], b[i]));
    }
    sort(vp.begin(), vp.end());

    for (i = 0; i < n; i++)
    {
      if (vp[i].second % A)
        attk = (vp[i].second / A) + 1;
      else
        attk = (vp[i].second / A);
      healthdec = (attk * vp[i].first);
      if (B > (attk - 1) * vp[i].first)
      {
        B -= healthdec;
        vp[i].second -= (attk * A);
      }
      else
      {
        break;
      }
      // while (attk)
      // {
      //   B -= vp[i].first;
      //   vp[i].second -= A;
      //   if (B <= 0)
      //     break;
      //   attk--;
      // }
      // cout << B << "\n";
      if (B <= 0)
        break;
    }

    for (i = 0; i < n; i++)
    {
      if (vp[i].second > 0)
      {
        temp = 0;
        break;
      }
    }
    temp ? cout << "YES\n" : cout << "NO\n";
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
