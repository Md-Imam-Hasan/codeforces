#include<stdio.h>

int main()
{
    int n,sx,sy,x1,y1,student=0,k,i;
    //cin>>n>>sx>>sy;
    scanf("%d %d %d",&n,&sx,&sy);
    int a[8];
    memset(a,0,sizeof(a));

    for(i=0;i<n;i++)
    {
        //cin>>x1>>y1;
        scanf("%d %d",&x1,&y1);
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

        for(i=0;i<8;i+=2)
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

        printf("%d\n",student);

        if(k==1)
        {
            printf("%d %d\n",sx,sy+1);
        }
        else if(k==3)
        {
            printf("%d %d\n",sx-1,sy);
        }
        else if(k==5)
        {
            printf("%d %d\n",sx,sy-1);
        }
        else
        {
            printf("%d %d\n",sx+1,sy);
        }

    return 0;

}

