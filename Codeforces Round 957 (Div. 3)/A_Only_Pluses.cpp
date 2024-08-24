#include <bits/stdc++.h>
#define ll long long
#define fast_io                 \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);
const double pi = 2.0 * acos(0.0);
// ok
using namespace std;
/// Code starts from here
int main()
{
  fast_io;
  int t, kase = 1;
  cin >> t;
  while (t--)
  {
    int a[3];
    cin >> a[0] >> a[1] >> a[2];

    int sum = a[0] + a[1] + a[2] + 5;

    int prod = 0;

    for (int i = a[0]; i <= a[0] + 5; i++)
    {
      for (int j = a[1]; j <= a[1] + 5; j++)
      {
        for (int k = a[2]; k <= a[2] + 5; k++)
        {
          if (i + j + k == sum)
          {
            prod = max(prod, i * j * k);
          }
        }
      }
    }

    cout << prod << "\n";
  }
  return 0;
}