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
        int n,i,j,k,flag=0;
        cin>>n;
        int a[n],b[n];

        for(i=0;i<n;i++) cin>>a[i];
        for(i=0;i<n;i++) cin>>b[i];

        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(a[i]>=a[j])
                {
                    if(b[i]!=b[j])
                    {
                        swap(&a[i], &a[j]);
                        swap(&b[i], &b[j]);
                    }
                }
            }
        }

        for(i=1;i<n;i++)
        {
            if(a[i]>=a[i-1])
            {
                continue;
            }
            else flag=1;
        }

        if(flag) cout<<"No";
        else cout<<"Yes";
        if(t) cout<<"\n";
    }

    return 0;
}
