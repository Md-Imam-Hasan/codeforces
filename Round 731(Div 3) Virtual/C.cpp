#include <bits/stdc++.h>
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
    int n, m, i,p=0,q=0, k,ans;
    bool yes=1;
    cin>>k>>n>>m;
    
    int a[n],b[m];
    vector<int> v;

    for(i=0;i<n;i++)
    {
      cin>>a[i];
    }
    for(i=0;i<m;i++)
    {
      cin>>b[i];
    }
    while(true)
    {
      while(a[p]<b[q]&&p<n)
      {
        v.push_back(a[p]);
        p++;
      }
      while(b[q]<=a[p]&&q<m)
      {
        v.push_back(b[q]);
        q++;
      }
      if(p==n||q==m)
      {
        break;
      }
    }
    if(p==n&&q<m)
    {
      while(q<m)
      {
        v.push_back(b[q]);
        q++;
      }
    }
    else if(q==m&&p<n)
    {
      while(p<n)
      {
        v.push_back(a[p]);
        p++;
      }
    }

    // for(i=0;i<m+n;i++)
    //   {
    //     cout<<v[i]<<" ";
    //   }
    //   cout<<"\n";

    for(i=0;i<m+n;i++)
    {
      if(v[i]==0)
      {
        k++;
      }
      else if(v[i]>k)
      {
        yes=0;
        break;
      }
    }


    if(yes)
    {
      for(i=0;i<m+n;i++)
      {
        cout<<v[i]<<" ";
      }
      cout<<"\n";
    }
    else cout<<"-1\n";
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