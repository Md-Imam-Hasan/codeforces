#include<bits/stdc++.h>
using namespace std;
const double PI=acos(-1.0);
#define ll long long
int main()
{
	int i,j,k;
	int n,m;
	int t;
	int x,y;
	int p;
	cin>>t;
	while(t--){
	cin>>n>>m;
 	int a[n+1][m+1];
 	for ( i = 1; i <= n; ++i)
 		{
 			for ( j = 1; j <= m; ++j)
 			{
 				cin>>a[i][j];
 			}
 		}
 		int cur=2;
 		p=1;
 	for ( i = 1; i <= n; ++i)
 		{
 			for (j=1 ; j<=m; ++j)
 			{
 				if(a[i][j]==0)
 				{
 					x=y=0;
 					for(k=1;k<=n;k++){
 						if(a[k][j]==1&&k!=i)x=1;
 					}
 					for(k=1;k<=m;k++){
 						if(a[i][k]==1&&k!=j)y=1;
 					}
 					if(x==0&&y==0){
 						a[i][j]=1;p++;
 						if(cur==2)cur=1;
 						else cur=2;
 					}
 				}
 			}
 		}
 		if(cur==1)cout<<"Ashish\n";
 		else cout<<"Vivek\n";
 	}
	return 0;
}
