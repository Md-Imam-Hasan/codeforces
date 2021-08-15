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
    int xa,ya,xb,yb,xf,yf, i, k,ans=0;
    cin>>xa>>ya>>xb>>yb>>xf>>yf;
    ans=abs(xa-xb)+abs(ya-yb);
    if(xa==xb&&xa==xf&&((yf>ya&&yf<yb)||(yf>yb&&yf<ya)))
      ans+=2;
    else if(ya==yb&&ya==yf&&((xf>xa&&xf<xb)||(xf>xb&&xf<xa)))
      ans+=2;
    cout<<ans<<"\n";

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