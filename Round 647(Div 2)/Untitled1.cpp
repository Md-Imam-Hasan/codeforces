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
        ll a,b,cnt=0;
        cin>>a>>b;

        if(a==b)
        {
            cout<<"0"<<endl;;
        }
        else if(a>b)
        {
            if(a%8!=0&&a%4!=0&&a%2!=0)
            {
                cout<<"-1"<<endl;
                goto A;
            }
            while(a>b)
            {
                if((a/8)>=b&&a%8==0)
                {
                    a/=8;
                    cnt++;
                }
                else if((a/4)>=b&&a%4==0)
                {
                    a/=4;
                    cnt++;
                }
                else if((a/2)>=b&&a%2==0)
                {
                    a/=2;
                    cnt++;
                }
                else break;
            }
            if(a==b)
            {
                cout<<cnt<<endl;
                goto A;
            }
            else
            {
                cout<<"-1"<<endl;
                goto A;
            }
        }
        else if(a<b)
        {
            while(a<b)
            {
                if((a*8)<=b)
                {
                    a*=8;
                    cnt++;
                }
                else if((a*4)<=b)
                {
                    a*=4;
                    cnt++;
                }
                else if((a*2)<=b)
                {
                    a*=2;
                    cnt++;
                }
                else break;
            }
            if(a==b)
            {
                cout<<cnt<<endl;
                goto A;
            }
            else
            {
                cout<<"-1"<<endl;
                goto A;
            }
        }

        //if(t) cout<<"\n";
    }

    return 0;
}

