#include <bits/stdc++.h>
#define ll long long
#define fast_io                 \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);
const double pi = 2.0 * acos(0.0);
// ok

using namespace std;

///Code starts from here

bool checkAlmostPrime(int n)
{
  std::vector<int> v;
  int i;

  if (n % 2 == 0)
  {
    v.push_back(2);
    while (n % 2 == 0)
    {
      n /= 2;
    }
  }

  for (i = 3; i * i <= n; i += 2)
  {
    if (n % i == 0)
    {
      v.push_back(i);
      while (n % i == 0)
      {
        n /= i;
      }
    }
  }

  if (n > 2)
  {
    v.push_back(n);
  }

  if (v.size() == 2) return true;
  else return false;
}

int main()
{
  fast_io;
  int n, i, j, cnt = 0;
  cin >> n;

  if (n < 6)
  {
    cout << "0\n";
    return 0;
  }

  for (i = 6; i <= n; i++)
  {
    if (checkAlmostPrime(i))
    {
      cnt++;
    }
  }

  cout << cnt << "\n";

  return 0;
}

/* stuff you should look for
  * int overflow, array bounds
  * special cases (n=1?)
  * do smth instead of nothing and stay organized
  * WRITE STUFF DOWN
  * DON'T GET STUCK ON ONE APPROACH
*/