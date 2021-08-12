#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n,sx,sy,x1,y1,student=0,k;
    //cin>>n>>sx>>sy;
    scanf("%lld %lld %lld",&n,&sx,&sy);
    ll a[8];
    memset(a,0,sizeof(a));

    for(ll i=0;i<n;i++)
    {
        //cin>>x1>>y1;
        scanf("%lld %lld",&x1,&y1);
        if((x1-sx)>0&&(y1-sy)>0)
        {
            a[0]++;
        }
        else if((x1-sx)==0&&(y1-sy)>0)
        {
            a[1]++;
        }
        else if((x1-sx)<0&&(y1-sy)>0)
        {
            a[2]++;
        }
        else if((x1-sx)<0&&(y1-sy)==0)
        {
            a[3]++;
        }
        else if((x1-sx)<0&&(y1-sy)<0)
        {
            a[4]++;
        }
        else if((x1-sx)==0&&(y1-sy)<0)
        {
            a[5]++;
        }
        else if((x1-sx)>0&&(y1-sy)<0)
        {
            a[6]++;
        }
        else
        {
            a[7]++;
        }
    }

        for(ll i=0;i<8;i+=2)
        {
            if((a[i]+a[i+1]+a[i+2])>student&&i!=6)
            {
                student=a[i]+a[i+1]+a[i+2];
                k=i+1;
            }
            else if((a[i]+a[i+1]+a[0])>student&&i==6)
            {
                student=a[i]+a[i+1]+a[0];
                k=i+1;
            }
        }

        printf("%lld\n",student);

        if(k==1)
        {
            printf("%lld %lld\n",sx,sy+1);
        }
        else if(k==3)
        {
            printf("%lld %lld\n",sx-1,sy);
        }
        else if(k==5)
        {
            printf("%lld %lld\n",sx,sy-1);
        }
        else
        {
            printf("%lld %lld\n",sx+1,sy);
        }

    return 0;

}
