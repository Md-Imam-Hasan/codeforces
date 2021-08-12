#include <bits/stdc++.h>
#define ll long long

using namespace std;

///Code starts from here
int main()
{
    int t;
    cin>>t;

    A:
    while(t--)
    {
        int n,x,i,j,k,L,R;
        cin>>n>>x;
        int a[n],sum=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }

        if(sum%x!=0)
        {
            cout<<n;
            if(t) cout<<"\n";
            goto A;
        }
        if(n==1)
        {
            if(sum%x!=0) cout<<"1";
            else cout<<"-1";
            if(t) cout<<"\n";
            goto A;
        }

        L=0,R=n-1;
        int sum1=sum;

        while(L<=R)
        {
            if(sum1%x==0)
            {
                if((sum1-a[L])%x!=0)
                {

                    sum1-=a[L];
                    L++;
                    break;
                }
                else if((sum1-a[R])%x!=0)
                {

                    sum1-=a[R];
                    R--;
                    break;
                }
                else
                {
                    L++;
                    R--;
                }
            }
            else break;
        }

        ///int ans=R-L+1;
        int n1=n,sum2=sum;
        for(i=0;i<n;i++)
        {
            if((sum2-a[i])%x!=0)
            {
                break;
            }
            ///else break;
        }

        n1=n-i-1;
        ///ans=max(n1,ans);
        int n2=n,sum3=sum;
        for(i=n-1;i>=0;i--)
        {
            if((sum3-a[i])%x!=0)
            {
                break;
            }
            ///else break;
        }
        n2=i;
        int ans=max(n1,n2);

        if(ans>0&&R-L+1>0) cout<<max(ans,R-L+1);
        else
        cout<<"-1";

        if(t) cout<<"\n";
    }

    return 0;
}
