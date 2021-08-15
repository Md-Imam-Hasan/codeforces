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
    int n, i,j, k,ans;
    string s,p="";
    bool b=1;
    cin>>s;
    n=s.length();
    // sort(s.begin(), s.end());
    string temp = "abcdefghijklmnopqrstuvwxyz";
    // cout<<s[0]<<"\n";
    j=0,k=n-1;
    for(i=0;i<n;i++)
    {
      if(s[j]>s[k])
      {
        p+=s[j];
        j++;
      }
      else if(s[k]>s[j])
      {
        p+=s[k];
        k--;
      }
      else
      {
        p+=s[j];
        break;
      }
    }

    // cout<<p<<"\n";

    for(i=n-1,j=0;i>=0;i--,j++)
    {
      if(p[i]!=temp[j])
      {
        b=0;
        break;
      }
    }

    if(b) cout<<"YES\n";
    else cout<<"NO\n";
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