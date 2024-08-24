#include <iostream>
using namespace std;

#define fast_io                 \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);

// const double pi = 2.0 * acos(0.0);

int main()
{
  fast_io;
  int t;
  cin >> t;

  while (t--)
  {
    int n, m, k, i;
    cin >> n >> m >> k;

    string s;
    cin >> s;

    bool isPossible = false;

    for (i = 0; i < n;)
    {
      if (s[i] == 'L' && m > 0)
      {
        isPossible = true;
        i++;
        continue;
      }
      else if (s[i] == 'C')
      {
        int C = 0;
        while (i < s.length() && (s[i] == 'C' || s[i] == 'W'))
        {
          C++;
          i++;
        }
        if (m >= C + 1)
        {
          isPossible = true;
          continue;
        }
        else
        {
          isPossible = false;
          break;
        }
      }
      else if (s[i] == 'W')
      {
        int W = 0;
        while (i < s.length() && (s[i] == 'W' || s[i] == 'C'))
        {
          W++;
          i++;
        }
        if (k >= W)
        {
          isPossible = true;
          k -= W;
          continue;
        }
        else if (m >= W + 1)
        {
          isPossible = true;
          continue;
        }
        else
        {
          isPossible = false;
          break;
        }
      }
      else
      {
        isPossible = false;
        break;
      }
    }

    cout << (isPossible ? "YES" : "NO") << '\n';
  }

  return 0;
}
