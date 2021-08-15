#include <bits/stdc++.h>
#define ll long long
#define fast_io
ios_base::sync_with_stdio(0);
cin.tie(0);
const double pi = 2.0 * acos(0.0);
ll mark[10000005];
// ok

using namespace std;

///Code starts from here
long long binpow(long long a, long long b, long long m)
{
  a %= m;
  long long res = 1;
  while (b > 0)
  {
    if (b & 1)
      res = res * a % m;
    a = a * a % m;
    b >>= 1;
  }
  return res;
}
int gcd(int a, int b)
{
  if (b == 0)
    return a;
  else
    return gcd(b, a % b);
}
ll findlcm(int arr[], int n)
{
  // Initialize result
  ll ans = arr[0];

  // ans contains LCM of arr[0], ..arr[i]
  // after i'th iteration,
  for (int i = 1; i < n; i++)
    ans = (((arr[i] * ans)) /
           (gcd(arr[i], ans)));

  return ans;
}
pair<int, int> fib(int n)
{
  if (n == 0)
    return {0, 1};

  auto p = fib(n >> 1);
  int c = p.first * (2 * p.second - p.first);
  int d = p.first * p.first + p.second * p.second;
  if (n & 1)
    return {d, c + d};
  else
    return {c, d};
}
void sieve(vector<ll> v)
{
  mark[0] = 1;
  mark[1] = 1;
  for (ll i = 4; i <= 10000005; i += 2)
    mark[i] = 1;
  v.push_back(2);
  for (ll i = 3; i < 10000005; i += 2)
  {
    if (!mark[i])
    {
      v.push_back(i);
      for (ll j = i * i; j <= 10000005; j += (i * 2))
        mark[j] = 1;
    }
  }
}
int main()
{
  fast_io;
  int t, kase = 1;
  cin >> t;
  while (t--)
  {
    ll n, i, j, k;
    cin >> n;
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
