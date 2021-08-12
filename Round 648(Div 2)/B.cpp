#include <bits/stdc++.h>
#define ll long long

using namespace std;

void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

///Code starts from here
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,i,j,k,flag=0,o=0,z=0;
        cin>>n;
        int a[n],b[n];

        for(i=0;i<n;i++) cin>>a[i];
        for(i=0;i<n;i++)
        {
            cin>>b[i];
            if(b[i]==0) o++;
            else z++;
        }
        for(i=0;i<n-1;i++)
        {
            if(a[i]<=a[i+1]) continue;
            else flag=1;
        }

        if(flag==0) cout<<"Yes";
        else if((o==0||z==0)&&flag==1) cout<<"No";
        else cout<<"Yes";
        if(t) cout<<"\n";
    }

    return 0;
}
