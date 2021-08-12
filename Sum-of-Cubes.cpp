#include <bits/stdc++.h>
#define ll long long
#define fast_io                 \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);
const double pi = 2.0 * acos(0.0);
// ok

using namespace std;

///Code starts from here
void sumOfTwoPerfectCubes(ll N)
{
  // Stores the perfect cubes
  // of first N natural numbers
  map<ll, ll> cubes;
  for (ll i = 1; i * i * i <= N; i++)
    cubes[i * i * i] = i;

  // Traverse the map
  map<ll, ll>::iterator itr;
  for (itr = cubes.begin();
       itr != cubes.end(); itr++)
  {

    // Stores first number
    ll firstNumber = itr->first;

    // Stores second number
    ll secondNumber = N - itr->first;

    // Search the pair for the first
    // number to obtain sum N from the Map
    if (cubes.find(secondNumber) != cubes.end())
    {
      cout << "YES\n";
      return;
    }
  }

  // If N cannot be represented as
  // sum of two positive perfect cubes
  cout << "NO\n";
}

int main()
{
  fast_io;
  int q, kase = 1;
  cin >> q;
  while (q--)
  {
    ll n;
    cin >> n;
    sumOfTwoPerfectCubes(n);
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
