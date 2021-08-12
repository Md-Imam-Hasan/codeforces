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
    int n, i, k,ans=0,cnt=0;
    string s;
    cin>>s;
    n=s.length();
    int a[26] = {0};
    for(i=0;i<n;i++)
    {
      a[s[i]-'0'-49]++;
    }
    for(i=0;i<26;i++)
    {
      if(a[i]>1) ans++;
      if(a[i]==1) cnt++; 
    }
    ans+=cnt/2;
    if(n==1) ans=0;

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
