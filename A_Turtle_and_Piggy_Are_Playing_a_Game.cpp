#include <iostream>
#include <cmath> // Use cmath for standard math functions

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--)
  {
    int l, r, p = 1, ans = -1; // Initialize `ans` with -1 as a default value in case no power of 2 lies within range [l, r]
    cin >> l >> r;

    while ((1 << p) <= r) // Efficient calculation of powers of 2 using bit shift
    {
      if ((1 << p) >= l)
      {
        ans = p;
      }
      p++;
    }

    cout << ans << '\n'; // Add newline after each test case output
  }
  return 0;
}
