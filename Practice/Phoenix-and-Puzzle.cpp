#include <bits/stdc++.h>
#define ll long long
#define fast_io                 \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);
const double pi = 2.0 * acos(0.0);
// ok

using namespace std;

///Code starts from here

bool isPerfectSquare(int x)
{
  // Find floating point value of
  // square root of x.
  if (x >= 0)
  {

    long long sr = sqrt(x);

    // if product of square root
    //is equal, then
    // return T/F
    return (sr * sr == x);
  }
  // else return false if n<0
  return false;
}
int main()
{
  fast_io;
  int t, kase = 1;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    if (n % 2 == 0)
    {
      if (isPerfectSquare(n / 2) || (n % 4 == 0 && isPerfectSquare(n / 4)))
      {
        cout << "YES\n";
      }
      else
        cout << "NO\n";
    }
    else
      cout << "NO\n";
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
