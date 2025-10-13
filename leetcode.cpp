#include <bits/stdc++.h>
#define ll long long
#define fast_io                 \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);
const double pi = 2.0 * acos(0.0);
// ok
using namespace std;
/// Code starts from here
class Solution
{
public:
  bool increasingTriplet(vector<int> &nums)
  {
    int n = INT_MAX, m = INT_MAX;
    for (int x : nums)
    {
      if (x <= n)
        n = x;
      else if (x > n && x <= m)
        m = x;
      else if (x > m)
        return true;
    }
    return false;
  }
};
int main()
{
  fast_io;

  // Example input
  vector<int> nums = {1, 2, 3, 4, 5};

  // Create object of Solution class
  Solution sol;

  // Call the method
  bool result = sol.increasingTriplet(nums);

  // Print the result
  if (result)
    cout << "True\n";
  else
    cout << "False\n";

  return 0;
}