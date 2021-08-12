#include<iostream>

using namespace std;

int main()
{
    long long n,m,k,x,y,z;
    cin>>n>>m>>k;

    if(k<=((n+m)-2))
    {
        if(k<n)
        {
            cout<<k+1<<" "<<1<<endl;
        }
        else if(k>=n)
        {
            x=k-(n-1);
            cout<<n<<" "<<x+1<<endl;
        }
        return 0;
    }

    if(k>((n+m)-2))
    {
        x=k-((n+m)-2);
        y=x/(m-1);
        z=x%(m-1);
        if(z)
            n-=(y+1);
        else n-=y;
        if(y%2==0&&z!=0) m-=(z-1);
        else if(y%2==0&&z==0) m=m;
        else if(z) m=z+1;
        else m=z+2;
        cout<<n<<" "<<m<<endl;

    }

}
