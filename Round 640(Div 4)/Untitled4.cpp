#include <bits/stdc++.h>
#define ll long long

using namespace std;

///Code starts from here
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        ll n,i,j,k=0,x,y,mov=0,alice=0,bob=0,flag=1,sum=0;
        cin>>n;
        ll a[n],b[n];

        for(i=0;i<n;i++)
        {
            cin>>a[i];
            b[n-i-1]=a[i];
            sum+=a[i];
        }

        ///for(i=0;i<n;i++) cout<<b[i]<<" ";
        ///cout<<endl;

        i=1;
        j=0;
        alice+=a[0];
        x=a[0];
        y=0;
        mov=1;

        while(1)
        {
            if(mov%2==0)
            {
                x=0;
                for(;i<n-j;i++)
                {
                    x+=a[i];
                    if(x>y)
                    {
                        alice+=x;
                        i++;
                        mov++;
                        break;
                    }
                    else if(i==(n-1-j))
                    {
                        alice+=x;
                        mov++;
                    }
                }

            }

            else
            {
                y=0;
                for(;j<n-i;j++)
                {
                    y+=b[j];
                    if(y>x)
                    {
                        bob+=y;
                        j++;
                        mov++;
                        break;
                    }
                    else if(j==(n-1-i))
                    {
                        bob+=y;
                        mov++;
                    }
                }

            }
            if(alice+bob==sum) break;
        }

        cout<<mov<<" "<<alice<<" "<<bob;

        if(t) cout<<"\n";
    }

    return 0;
}


