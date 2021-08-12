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
    cin >> n >> k;
    int x;
    map<int, int> mp;
    map<int, int>::iterator it;
    for (i = 0; i < n; i++)
    {
      cin >> x;
      mp[x] = 1;
      mx = max(mx, x);
    }
    for (it = mp.begin(); it != mp.end(); it++)
    {
      if (it->first == mn)
        mn++;
      else
        break;
    }
    // cout << "value: " << mn << " " << mx << " " << mp.size() << "\n";
    if (mn > mx)
    {
      ans = mp.size() + k;
    }
    else
    {
      if ((mn + mx) % 2)
      {
        temp1 = (mn + mx) / 2 + 1;
      }
      else
      {
        temp1 = (mn + mx) / 2;
      }
      // cout << "ok " << mp[temp1] << "\n";
      if (mp[temp1])
      {
        ans = mp.size();
      }
      else if (!k)
      {
        ans = mp.size() - 1;
      }
      else
      {
        ans = mp.size();
      }
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
