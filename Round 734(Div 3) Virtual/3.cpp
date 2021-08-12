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
    int n, i, k, j;
    cin>>n>>k;
    int x,ans[n]={0},cnt=0,color=0;
    map<int, vector<int>>mp;
    for(i=0;i<n;i++){
      cin>>x;
      if(mp[x].size()<k) mp[x].push_back(i);
    }
    for(auto c : mp) cnt+=c.second.size();
    cnt-=cnt%k;

    for(auto c: mp)
    {
      for(auto i: c.second)
      {
        ans[i] = ++color;
        color%=k;
        cnt--;
        if(cnt==0) goto output;
      }
    }
    output:
    for (int i = 0; i < n; i++)
			cout << ans[i] << ' ';
		cout << '\n';
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
