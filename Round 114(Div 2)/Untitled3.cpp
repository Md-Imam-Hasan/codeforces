#include <bits/stdc++.h>
#define ll long long

using namespace std;

///Code starts from here
int main()
{
    int n;
    double a,d;
    scanf("%d%lf%lf",&n,&a,&d);
    double t,v,time=0.0,s,s1,flag=0.0,x,y,z;
    x=sqrt((2*d)/a);
    y=sqrt(2*a*d);

    for(int i=0;i<n;i++)
    {
       scanf("%lf%lf",&t,&v);
        x+=t;
        if(y>=v)
        {
            time=v/a;
            //cout<<time<<endl;
            s=0.5*a*time*time;
            //cout<<s<<endl;
            time+=t;
            //cout<<time<<endl;
            s1=d-s;
            //cout<<s1<<endl;
            time+=s1/v;
            //cout<<time<<endl;

            flag=max(flag,time);
            //cout<<flag<<endl;
            printf("%0.6f\n",flag);
        }
        else
        {
            flag=max(flag,x);
            printf("%.6f\n",flag);
        }
        x-=t;
    }

    return 0;
}
