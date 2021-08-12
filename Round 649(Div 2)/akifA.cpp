#include<bits/stdc++.h>
using namespace std;
const double PI=acos(-1.0);
#define ll long long
int main()
{
	int i,j,k;
	int x,n;
	int t;
	cin>>t;
	while(t--){
	cin>>n>>x;
	int a[n];
	int sum=0;
	for ( i = 0; i < n; ++i)
	{
		cin>>a[i];
		sum+=a[i];
	}
	int sum1=sum;
	if(sum%x!=0)
	{
		cout<<n<<endl;
	}
	else if(n==1)
	{
		if(sum%x==0)cout<<"-1\n";
		else cout<<"1\n";
	}
	else{
	int l,r;
	l=0,r=n-1;
	i=0;j=0;
	while(l<=r)
	{
		//cout<<l<<r<<endl;
		if(sum%x==0)
		{
			if((sum-a[r])%x!=0)
			{
				sum-=a[r];r--;
				break;
			}
			else if((sum-a[l])%x!=0)
			{
				sum-=a[l];l++;
				break;
			}
			else /*if((sum-a[r])%x==0&&(sum-a[l])%x==0)*/
			{
				//j=1;
				l++;r--;
			}
		}
		else
		{
			break;
		}
		//i++;
		//if(i==10)break;
	}
	//if(r-l+1==90)
		{
			//cout<<r-l+1<<endl;
		}
	//else {
		int sum2=sum1;
			int ans1,ans2;
			for ( i = 0; i < n; ++i)
			{
				if((sum1-a[i])%x!=0)
				{
					break;
				}
			}
			ans1=n-i-1;
			for ( i = n-1; i > -1; --i)
			{
				if((sum2-a[i])%x!=0)
				{
					break;
				}
			}
			ans2=i;
			//cout<<ans1<<ans2<<endl;
			int ans=max(ans1,ans2);
			if(ans!=0&&r-l+1!=0){
				if(r-l+1>ans&&r-l+1!=n)
				{
					cout<<r-l+1<<endl;
				}
				else cout<<ans<<endl;
			}
			else cout<<-1<<endl;
	}
}
	return 0;
}
