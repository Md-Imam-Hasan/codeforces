#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    int T;
    cin>>T;

    A:
    while(T--)
    {
        ll h,c,t,a,b,x,p,q;
        cin>>h>>c>>t;
        if(h+c-2*t>=0)
        {
            cout<<"2";
        }
        else
        {
            a=h-t;
            b=2*t-c-h;
            x=2*(a/b)+1;
            //cout<<x<<endl;
            p=abs(((x+1)/2)*h+(x/2)*c-t*x)*(x+2);
            q=abs(((x+3)/2)*h+((x+2)/2)*c-t*(x+2))*x;
            if(p<=q)
            {
                cout<<x;
            }
            else cout<<x+2;
        }
        if(T) cout<<"\n";
    }

    return 0;
}

